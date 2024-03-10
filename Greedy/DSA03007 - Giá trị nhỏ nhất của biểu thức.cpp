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
        cin >> n;
        long long a[n], b[n], d = 0;
        for (long long& i : a) cin >> i;
        for (long long& i : b) cin >> i;
        sort(a, a + n, greater<>());
        sort(b, b + n);
        for (int i = 0; i < n; ++i) d += (a[i] * b[i]);
        cout << d << "\n";
    }
}
