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
        int a[n], b[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
            {
                cout << i + 1 << " ";
                break;
            }
        }
        for (int i = n - 1; ~i; --i)
        {
            if (a[i] != b[i])
            {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
}
