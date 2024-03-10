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
        int a[n], f[n], k[n];
        for (int i = 0; i < n; ++i) cin >> a[i];
        f[0] = k[n - 1] = 1;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] > a[i - 1])
            {
                f[i] = f[i - 1] + 1;
                //if (a[i] == a[i - 1]) k[i] = k[i - 1] + 1;
                //else k[i] = 1;
            }
            else
            {
                //k[i] = k[i - 1] + 1;
                f[i] = 1;
            }
            //cout << f[i] << " ";
            //if (a[i] <= a[i - 1]) k[i] = k[i - 1] + 1;
            //else k[i] = 1;
        }
        //cout << "\n";
        for (int i = n - 2; ~i; --i)
        {
            if (a[i] > a[i + 1]) k[i] = k[i + 1] + 1;
            else k[i] = 1;
            //cout << k[i] << " ";
        }
        //cout << "\n";
        for (int i = 0; i < n; ++i) d = max(f[i] + k[i] - 1, d);
        cout << d << "\n";
    }
}
