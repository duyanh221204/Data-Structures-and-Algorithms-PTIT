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
        int n, s = 0;
        cin >> n;
        int a[n], f[10002] = {};
        for (int& i : a)
        {
            cin >> i;
            s += i;
        }
        if (s & 1) cout << "NO\n";
        else
        {
            f[0] = 1;
            for (int i = 0; i < n; ++i)
            {
                for (int j = s; j >= a[i]; --j)
                {
                    if (f[j - a[i]]) f[j] = 1;
                }
            }
            if (f[s >> 1]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
