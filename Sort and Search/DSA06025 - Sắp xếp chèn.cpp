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
        int n, d = 0;
        cin >> n;
        int a[n];
        for (int& i : a) cin >> i;
        for (int i = 0; i < n; ++i)
        {
            int k = a[i], x = i - 1;
            while (~x && a[x] > k)
            {
                a[x + 1] = a[x];
                --x;
            }
            a[x + 1] = k;
            cout << "Buoc " << d++ << ": ";
            for (int j = 0; j <= i; ++j) cout << a[j] << " ";
            cout << "\n";
        }
    }
}
