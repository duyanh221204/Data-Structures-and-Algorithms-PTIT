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
        int n, d1 = 2e9, d2 = 2e9;
        cin >> n;
        int a[n];
        for (int& i : a)
        {
            cin >> i;
            d1 = min(i, d1);
        }
        for (int& i : a)
        {
            if (i > d1) d2 = min(i, d2);
        }
        if (d2 == 2e9) cout << "-1\n";
        else cout << d1 << " " << d2 << "\n";
    }
}
