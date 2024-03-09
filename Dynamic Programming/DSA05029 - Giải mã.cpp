#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int x = s.size(), f[42] = {};
        f[0] = f[1] = s[0] > 48;
        for (int i = 2; i <= x; ++i)
        {
            if (s[i - 1] > 48) f[i] = f[i - 1];
            if (s[i - 2] == 49 || (s[i - 2] == 50 && s[i - 1] <= 54)) f[i] += f[i - 2];
        }
        cout << f[x] << "\n";
    }
}
