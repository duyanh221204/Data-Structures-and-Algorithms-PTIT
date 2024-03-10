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
        int a[n], b[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i] && a[i] != b[n - i - 1])
            {
                d = 1;
                cout << "No\n";
                break;
            }
        }
        if (!d) cout << "Yes\n";
    }
}
