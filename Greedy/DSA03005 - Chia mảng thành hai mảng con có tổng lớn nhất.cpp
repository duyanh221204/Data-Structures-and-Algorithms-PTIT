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
        int n, k, x, d = 0, s = 0;
        cin >> n >> k;
        int a[n];
        for (int& i : a)
        {
            cin >> i;
            s += i;
        }
        sort(a, a + n);
        x = min(k, n - k);
        for (int i = 0; i < x; ++i) d += a[i];
        cout << s - d - d << "\n";
    }
}
