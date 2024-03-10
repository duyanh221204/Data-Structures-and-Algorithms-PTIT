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
        long long n, k, d = 0;
        cin >> n >> k;
        long long a[n];
        for (long long& i : a) cin >> i;
        sort(a, a + n);
        for (long long i = 0; i < n; ++i)
        {
            for (long long j = i + 1; j < n; ++j)
            {
                if (binary_search(a + j + 1, a + n, k - a[i] - a[j]))
                {
                    d = 1;
                    cout << "YES\n";
                    break;
                }
            }
            if (d) break;
        }
        if (!d) cout << "NO\n";
    }
}
