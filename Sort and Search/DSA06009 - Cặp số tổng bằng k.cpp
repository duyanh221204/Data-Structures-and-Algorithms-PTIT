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
        int n, k, d = 0;
        cin >> n >> k;
        int a[n];
        for (int& i : a) cin >> i;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (a[i] + a[j] == k) ++d;
            }
        }
        cout << d << "\n";
    }
}
