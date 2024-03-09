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
        int n, x;
        cin >> n;
        int a[n + 2][n + 2];
        for (int i = 1; i <= n; ++i) cin >> a[1][i];
        x = n - 1;
        for (int i = 2; i <= n; ++i)
        {
            for (int j = 1; j <= x; ++j) a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
            --x;
        }
        x = 1;
        for (int i = n; i; --i)
        {
            cout << "[";
            for (int j = 1; j <= x; ++j)
            {
                cout << a[i][j];
                if (j < x) cout << " ";
            }
            cout << "] ";
            ++x;
        }
        cout << "\n";
    }
}
