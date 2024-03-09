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
        string n, m;
        cin >> n >> m;
        int f[n.size() + 2][m.size() + 2] = {};
        for (int i = 1; i <= n.size(); ++i)
        {
            for (int j = 1; j <= m.size(); ++j)
            {
                if (n[i - 1] == m[j - 1]) f[i][j] = f[i - 1][j - 1] + 1;
                else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
                //cout << f[i][j] << "\n";
            }
        }
        cout << f[n.size()][m.size()] << "\n";
    }
}
