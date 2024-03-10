#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    long long f[10002] = {};
    for (int i = 1; i <= 10000; ++i) f[i] = i;
    for (int i = 1; i <= 10000; ++i)
    {
        int x = sqrt(i);
        for (int j = 2; j <= x; ++j) f[i] = min(f[i - j * j] + 1, f[i]);
    }
    while (T--)
    {
        int n;
        cin >> n;
        cout << f[n] << "\n";
    }
}
