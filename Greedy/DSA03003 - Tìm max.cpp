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
        int n, mod = 1e9 + 7;
        cin >> n;
        long long a[n], d = 0;
        for (long long& i : a) cin >> i;
        sort(a, a + n);
        for (int i = 0; i < n; ++i) (d += (a[i] * i)) %= mod;
        cout << d << "\n";
    }
}
