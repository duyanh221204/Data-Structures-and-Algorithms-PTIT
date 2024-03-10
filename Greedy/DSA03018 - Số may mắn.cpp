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
        int n, d = 0, d4, d7;
        cin >> n;
        d7 = n / 7;
        while (d7)
        {
            if ((n - d7 * 7) % 4 == 0)
            {
                d = 1;
                d4 = (n - d7 * 7) / 4;
                break;
            }
            --d7;
        }
        if (d)
        {
            while (d4--) cout << "4";
            while (d7--) cout << "7";
        }
        else cout << "-1";
        cout << "\n";
    }
}
