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
        long long p, q;
        cin >> p >> q;
        while (1)
        {
            if (q % p == 0)
            {
                cout << "1/" << q / p << "\n";
                break;
            }
            long long x = q / p + 1;
            cout << "1/" << x << " + ";
            (p *= x) -= q;
            q *= x;
        }
    }
}
