#include<bits/stdc++.h>
using namespace std;
long long f[93];
int tt(int n, long long k)
{
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (k <= f[n - 2]) return tt(n - 2, k);
    return tt(n - 1, k - f[n - 2]);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    f[1] = 1;
    for (int i = 2; i < 93; ++i) f[i] = f[i - 2] + f[i - 1];
    while (T--)
    {
        int n;
        long long k;
        cin >> n >> k;
        cout << tt(n, k) << "\n";
    }
}
