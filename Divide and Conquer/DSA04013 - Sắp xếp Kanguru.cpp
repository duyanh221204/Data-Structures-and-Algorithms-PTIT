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
        int n, d, x, y;
        cin >> n;
        int a[n];
        for (int& i : a) cin >> i;
        sort(a, a + n);
        d = n;
        x = (n >> 1) - 1;
        y = n - 1;
        while (~x && y >= n >> 1)
        {
            if (a[y] >= a[x] << 1) --d, --x, --y;
            else --x;
        }
        cout << d << "\n";
    }
}
