#include<bits/stdc++.h>
using namespace std;
int cmp(string a, string b)
{
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        string f[a + 2][b + 2] = {};
        for (int i = 1; i <= a; ++i)
        {
            for (int j = 1; j <= b; ++j)
            {
                for (int k = 0; k <= 9; ++k)
                {
                    if ((i == k && j == k * k) || (i > k && j > k * k && f[i - k][j - k * k] != ""))
                    {
                        if (f[i][j] == "" || cmp(f[i - k][j - k * k] + to_string(k), f[i][j])) f[i][j] = f[i - k][j - k * k] + to_string(k);
                        //else f[i][j] = min(f[i - k][j - k * k] + to_string(k), f[i][j]);
                        //cout << f[i][j] << " ";
                    }
                    //cout << "\n";
                }
            }
        }
        if (f[a][b] == "") cout << "-1";
        else cout << f[a][b];
        cout << "\n";
    }
}
