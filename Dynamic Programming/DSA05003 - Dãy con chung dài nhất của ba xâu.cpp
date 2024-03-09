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
        int x, y, z;
        string s1, s2, s3;
        cin >> x >> y >> z >> s1 >> s2 >> s3;
        int f[x + 2][y + 2][z + 2] = {};
        for (int i = 1; i <= x; ++i)
        {
            for (int j = 1; j <= y; ++j)
            {
                for (int k = 1; k <= z; ++k)
                {
                    if (s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1]) f[i][j][k] = f[i - 1][j - 1][k - 1] + 1;
                    else f[i][j][k] = max({f[i - 1][j][k], f[i][j - 1][k], f[i][j][k - 1]});
                }
            }
        }
        cout << f[x][y][z] << "\n";
    }
}
