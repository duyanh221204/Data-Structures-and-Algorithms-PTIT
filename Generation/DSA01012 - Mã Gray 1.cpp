#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    string s[12][1025] = {};
    s[1][1] = "0";
    s[1][2] = "1";
    for (int i = 2; i <= 10; ++i)
    {
        int x = 1 << (i - 1);
        for (int j = 1; j <= x; ++j)
        {
            s[i][j] = "0" + s[i - 1][j];
            s[i][x + j] = "1" + s[i - 1][x - j + 1];
        }
    }
    while (T--)
    {
        int n, x;
        cin >> n;
        x = 1 << n;
        for (int i = 1; i <= x; ++i) cout << s[n][i] << " ";
        cout << "\n";
    }
}
