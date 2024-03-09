#include<bits/stdc++.h>
using namespace std;
long long f[93];
char tt(int n, long long i)
{
    if (n == 1) return 65;
    if (n == 2) return 66;
    if (i <= f[n - 2]) return tt(n - 2, i);
    return tt(n - 1, i - f[n - 2]);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    f[1] = 1;
    for (int i = 2; i <= 92; ++i) f[i] = f[i - 2] + f[i - 1];
    while (T--)
    {
        int n;
        long long i;
        cin >> n >> i;
        cout << tt(n, i) << "\n";
    }
}
