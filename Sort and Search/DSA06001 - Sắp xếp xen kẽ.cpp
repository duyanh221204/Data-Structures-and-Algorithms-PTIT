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
        int n, x;
        cin >> n;
        int a[n];
        for (int& i : a) cin >> i;
        sort(a, a + n);
        x = n >> 1;
        for (int i = 0; i < x; ++i) cout << a[n - i - 1] << " " << a[i] << " ";
        if (n & 1) cout << a[x];
        cout << "\n";
    }
}
