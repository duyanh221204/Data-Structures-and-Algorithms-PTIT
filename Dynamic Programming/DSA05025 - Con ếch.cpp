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
        int n;
        cin >> n;
        long long d = 0, x = 1, y = 2, z = 4;
        for (int i = 4; i <= n; ++i)
        {
            d = x + y + z;
            x = y;
            y = z;
            z = d;
        }
        if (n == 1) cout << x;
        else if (n == 2) cout << y;
        else if (n == 3) cout << z;
        else cout << d;
        cout << "\n";
    }
}
