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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int& i : a) cin >> i;
        sort(a, a + n);
        long long d = 0;
        for (int i = 0; i < n - 1; ++i) d += (lower_bound(a + i + 1, a + n, k + a[i]) - a - i - 1);
        cout << d << "\n";
    }
}
