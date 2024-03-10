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
        int a[n + 2];
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i < n; ++i)
        {
            if (a[i] > a[i + 1]) d = i;
        }
        if (d) cout << d << "\n";
        else
        {
            if (a[1] >= a[n]) cout << n << "\n";
            else cout << "0\n";
        }
    }
}
