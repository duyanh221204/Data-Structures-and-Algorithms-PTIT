#include<bits/stdc++.h>
using namespace std;
string tt1(string s1, string s2)
{
    if (s1.size() < s2.size() || (s1.size() == s2.size() && s1 < s2)) swap(s1, s2);
    //cout << s1 << " " << s2 << "\n";
    int x = 0, x1 = s1.size(), x2 = s2.size();
    vector<int> v, v1, v2;
    for (char& i : s1) v1.push_back(i - 48);
    for (char& i : s2) v2.push_back(i - 48);
    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());
    for (int i = x2; i < x1; ++i) v2.push_back(0);
    for (int i = 0; i < x1; ++i)
    {
        int d = v1[i] + v2[i] + x;
        v.push_back(d % 10);
        x = d / 10;
        //cout << d << " ";
    }
    if (x) v.push_back(x);
    string s = "";
    for (int i = v.size() - 1; ~i; --i)
    {
        //cout << v[i] << " ";
        s += to_string(v[i]);
    }
    return s;
}
string tt2(string s1, string s2)
{
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int d = 0, x1 = s1.size(), x2 = s2.size();
    vector<int> v(x1 + x2);
    for (int i = 0; i < x1; ++i)
    {
        for (int j = 0; j < x2; ++j)
        {
            v[i + j] += ((s1[i] - 48) * (s2[j] - 48));
            v[i + j + 1] += (v[i + j] / 10);
            v[i + j] %= 10;
        }
    }
    for (int i = 0; i < x1 + x2; ++i)
    {
        v[i + 1] += (v[i] / 10);
        v[i] %= 10;
        //cout << v[i] << " ";
    }
    string s = "";
    for (int i = x1 + x2 - 1; ~i; --i)
    {
        if (!d && v[i]) d = 1;
        if (d) s += to_string(v[i]);
    }
    if (!d) return "0";
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    string f[102];
    fill(f, f + 102, "0");
    f[0] = f[1] = "1";
    for (int i = 2; i <= 100; ++i)
    {
        for (int j = 0; j < i; ++j) f[i] = tt1(f[i], tt2(f[j], f[i - j - 1]));
    }
    while (T--)
    {
        int n;
        cin >> n;
        cout << f[n] << "\n";
    }
}
