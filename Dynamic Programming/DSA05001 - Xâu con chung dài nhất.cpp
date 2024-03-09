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
        string s1, s2;
        cin >> s1 >> s2;
        int x1 = s1.size(), x2 = s2.size(), f[1002][1002] = {};
        for (int i = 1; i <= x1; ++i)
        {
            for (int j = 1; j <= x2; ++j)
            {
                if (s1[i - 1] == s2[j - 1]) f[i][j] = f[i - 1][j - 1] + 1;
                else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
        cout << f[x1][x2] << "\n";
    }
}
