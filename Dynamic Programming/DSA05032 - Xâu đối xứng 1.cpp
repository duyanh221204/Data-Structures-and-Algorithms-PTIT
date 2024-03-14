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
        string s, k;
        cin >> s;
        int x = s.size(), f[s.size() + 2][s.size() + 2] = {};
        k = s;
        reverse(k.begin(), k.end());
        for (int i = 1; i <= x; ++i)
        {
            for (int j = 1; j <= x; ++j)
            {
                if (s[i - 1] == k[j - 1]) f[i][j] = f[i - 1][j - 1] + 1;
                else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
        cout << x - f[x][x] << "\n";
    }
}
