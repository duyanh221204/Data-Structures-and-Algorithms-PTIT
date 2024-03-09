#include<bits/stdc++.h>
using namespace std;
int n, d, a[12][12];
string s;
void tt(int x, int y)
{
    if (x == n && y == n)
    {
        d = 1;
        cout << s << " ";
    }
    else
    {
        if (a[x + 1][y])
        {
            s += "D";
            tt(x + 1, y);
            s.pop_back();
        }
        if (a[x][y + 1])
        {
            s += "R";
            tt(x, y + 1);
            s.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j) cin >> a[i][j];
        }
        if (!a[1][1] || !a[n][n]) cout << "-1";
        else
        {
            tt(1, 1);
            if (!d) cout << "-1";
            d = 0;
            s = "";
        }
        cout << "\n";
    }
}
