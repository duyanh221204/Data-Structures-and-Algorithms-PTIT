#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1, a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    cin >> T;
    while (T--)
    {
        int n, d = 0;
        cin >> n;
        for (int i = 9; ~i; --i)
        {
            while (n >= a[i])
            {
                ++d;
                n -= a[i];
            }
            if (!n) break;
        }
        cout << d << "\n";
    }
}
