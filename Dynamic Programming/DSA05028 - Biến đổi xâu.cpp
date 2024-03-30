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
        int f[s1.size() + 2][s2.size() + 2] = {};
        for (int i = 0; i <= s1.size(); ++i)
        {
            for (int j = 0; j <= s2.size(); ++j)
            {
                if (!i || !j) f[i][j] = i + j;
                else if (s1[i - 1] == s2[j - 1]) f[i][j] = f[i - 1][j - 1];
                else f[i][j] = min({f[i - 1][j], f[i - 1][j - 1], f[i][j - 1]}) + 1;
            }
        }
        cout << f[s1.size()][s2.size()] << "\n";
    }
}
