#include<bits/stdc++.h>
using namespace std;
int k[1000002];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    k[0] = k[1] = 1;
    for (int i = 2; i <= 1000; ++i)
    {
        if (!k[i])
        {
            for (int j = i * i; j <= 1000000; j += i) k[j] = 1;
        }
    }
    while (T--)
    {
        int n, d = 0;
        cin >> n;
        for (int i = 2; i <= n >> 1; ++i)
        {
            if (!k[i] && !k[n - i])
            {
                d = 1;
                cout << i << " " << n - i << "\n";
                break;
            }
        }
        if (!d) cout << "-1\n";
    }
}
