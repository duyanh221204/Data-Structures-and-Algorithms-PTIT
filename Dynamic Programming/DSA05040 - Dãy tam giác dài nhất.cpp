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
        int a[n], f1[n], f2[n];
        for (int& i : a) cin >> i;
        f1[0] = f2[n - 1] = 1;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] > a[i - 1]) f1[i] = f1[i - 1] + 1;
            else f1[i] = 1;
        }
        for (int i = n - 2; ~i; --i)
        {
            if (a[i] > a[i + 1]) f2[i] = f2[i + 1] + 1;
            else f2[i] = 1;
        }
        for (int i = 0; i < n; ++i) d = max(f1[i] + f2[i] - 1, d);
        cout << d << "\n";
    }
}
