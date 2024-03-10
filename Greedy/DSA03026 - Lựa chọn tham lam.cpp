#include<bits/stdc++.h>
using namespace std;
string tmax(int n, int s)
{
    string ss = "";
    for (int i = 0; i < s / 9; ++i) ss += 57;
    if (s % 9) ss += to_string(s % 9);
    while (ss.size() < n) ss += 48;
    return ss;
}
string tmin(string s)
{
    string k = s;
    reverse(k.begin(), k.end());
    if (k[0] == 48)
    {
        for (int i = 1; i < k.size(); ++i)
        {
            if (k[i] > 48)
            {
                --k[i];
                ++k[0];
                break;
            }
        }
    }
    return k;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int n, s;
        cin >> n >> s;
        if (n * 9 < s || (n > 1 && !s)) cout << "-1 -1";
        else cout << tmin(tmax(n, s)) << " " << tmax(n, s);
        //cout << "\n";
    }
}
