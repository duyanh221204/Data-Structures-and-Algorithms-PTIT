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
        int n, m, k, xn = 0, xm = 0, xk = 0, d = 0;
        cin >> n >> m >> k;
        int a[n], b[m], c[k];
        for (int& i : a) cin >> i;
        for (int& i : b) cin >> i;
        for (int& i : c) cin >> i;
        while (xn < n && xm < m && xk < k)
        {
            if (a[xn] == b[xm] && b[xm] == c[xk])
            {
                d = 1;
                cout << a[xn] << " ";
                ++xn, ++xm, ++xk;
            }
            else if (a[xn] < b[xm]) ++xn;
            else if (b[xm] < c[xk]) ++xm;
            else ++xk;
        }
        if (!d) cout << "NO";
        cout << "\n";
    }
}
