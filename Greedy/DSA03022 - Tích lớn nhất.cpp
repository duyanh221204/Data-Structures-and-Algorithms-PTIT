#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (long long& i : a) cin >> i;
        sort(a, a + n);
        cout << max({a[n - 1] * a[n - 2] * a[n - 3], a[n - 1] * a[0] * a[1], a[0] * a[1], a[n - 2] * a[n - 1]});
    }
}
