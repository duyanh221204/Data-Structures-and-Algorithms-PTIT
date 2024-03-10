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
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for (long long& i : a) cin >> i;
        sort(a, a + n);
        long long d = 0;
        for (long long i = 0; i < n - 2; ++i)
        {
            for (long long j = i + 1; j < n - 1; ++j)
            {
                auto it = lower_bound(a + j + 1, a + n, k - a[i] - a[j]);
                d += (it - a - j - 1);
            }
        }
        cout << d << "\n";
    }
}
