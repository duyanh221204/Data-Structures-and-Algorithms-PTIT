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
        int n;
        long long x, k;
        cin >> n >> x;
        long long a[n];
        for (long long& i : a) cin >> i;
        k = lower_bound(a, a + n, x) - a;
        if (k == n) cout << n;
        else if (!k)
        {
            if (x == a[k]) cout << "1";
            else cout << "-1";
        }
        else
        {
            if (x == a[k]) cout << k + 1;
            else cout << k;
        }
        cout << "\n";
    }
}
