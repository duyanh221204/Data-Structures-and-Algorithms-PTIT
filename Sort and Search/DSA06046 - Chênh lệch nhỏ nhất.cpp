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
        int n, d = 2e9;
        cin >> n;
        int a[n];
        for (int& i : a) cin >> i;
        sort(a, a + n);
        for (int i = 1; i < n; ++i) d = min(a[i] - a[i - 1], d);
        cout << d << "\n";
    }
}
