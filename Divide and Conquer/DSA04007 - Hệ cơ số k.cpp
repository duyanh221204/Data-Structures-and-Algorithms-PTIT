#include<bits/stdc++.h>
using namespace std;
void tt(int k, string& s1, string& s2)
{
    if (s1.size() < s2.size() || (s1.size() == s2.size() && s1 < s2)) swap(s1, s2);
    int x1 = s1.size(), x2 = s2.size(), m = 0;
    vector<int> v1, v2, v;
    for (char& i : s1) v1.push_back(i - 48);
    for (char& i : s2) v2.push_back(i - 48);
    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());
    for (int i = x2; i < x1; ++i) v2.push_back(0);
    for (int i = 0; i < x1; ++i)
    {
        int d = v1[i] + v2[i] + m;
        v.push_back(d % k);
        m = d / k;
    }
    if (m) v.push_back(m);
    for (int i = v.size() - 1; ~i; --i) cout << v[i];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int k;
        string s1, s2;
        cin >> k >> s1 >> s2;
        tt(k, s1, s2);
        cout << "\n";
    }
}
