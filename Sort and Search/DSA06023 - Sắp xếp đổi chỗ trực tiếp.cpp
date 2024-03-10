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
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (a[i] > a[j]) swap(a[i], a[j]);
            }
            cout << "Buoc " << ++d << ": ";
            for (int& j : a) cout << j << " ";
            cout << "\n";
        }
    }
}
