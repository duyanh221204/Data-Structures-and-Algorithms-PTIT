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
            int h = 0;
            for (int j = 0; j < n - i - 1; ++j)
            {
                if (a[j] > a[j + 1])
                {
                    h = 1;
                    swap(a[j], a[j + 1]);
                }
            }
            if (h)
            {
                cout << "Buoc " << ++d << ": ";
                for (int& j : a) cout << j << " ";
                cout << "\n";
            }
        }
    }
}
