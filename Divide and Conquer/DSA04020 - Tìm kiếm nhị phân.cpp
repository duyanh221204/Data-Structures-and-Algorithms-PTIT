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
        auto it = lower_bound(a, a + n, k);
        if (*it == k) cout << it - a + 1 << "\n";
        else cout << "NO\n";
    }
}
