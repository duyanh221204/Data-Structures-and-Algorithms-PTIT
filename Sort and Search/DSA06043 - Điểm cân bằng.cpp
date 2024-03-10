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
        int n, d = 0;
        cin >> n;
        int b[n + 2] = {};
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            b[i] = b[i - 1] + x;
        }
        if (n < 3) cout << "-1\n";
        else
        {
            for (int i = 1; i < n; ++i)
            {
                if (b[i - 1] == b[n] - b[i])
                {
                    d = 1;
                    cout << i << "\n";
                    break;
                }
            }
            if (!d) cout << "-1\n";
        }
    }
}
