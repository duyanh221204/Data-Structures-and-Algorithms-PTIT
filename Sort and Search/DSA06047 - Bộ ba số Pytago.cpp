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
        int n, d = 0;
        cin >> n;
        long long a[n];
        for (long long& i : a)
        {
            cin >> i;
            i *= i;
        }
        sort(a, a + n, greater<>());
        for (int i = 0; i < n; ++i)
        {
            int l = i + 1, r = n - 1;
            while (l < r)
            {
                if (a[l] + a[r] == a[i])
                {
                    d = 1;
                    cout << "YES\n";
                    break;
                }
                else if (a[l] + a[r] > a[i]) ++l;
                else --r;
            }
            if (d) break;
        }
        if (!d) cout << "NO\n";
    }
}
