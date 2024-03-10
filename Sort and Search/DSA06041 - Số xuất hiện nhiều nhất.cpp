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
        int n, d = 0, x = 0;
        cin >> n;
        int a[n], k[1000002] = {};
        for (int& i : a)
        {
            cin >> i;
            ++k[i];
            x = max(k[i], x);
        }
        for (int& i : a)
        {
            if (k[i] == x && x > n >> 1)
            {
                d = 1;
                cout << i << "\n";
                break;
            }
        }
        if (!d) cout << "NO\n";
    }
}
