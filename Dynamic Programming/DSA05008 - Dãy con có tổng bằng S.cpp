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
        int n, s;
        cin >> n >> s;
        int a[n], f[40002] = {};
        for (int& i : a) cin >> i;
        f[0] = 1;
        for (int& i : a)
        {
            for (int j = s; j >= i; --j)
            {
                if (f[j - i]) f[j] = 1;
            }
        }
        if (f[s]) cout << "YES\n";
        else cout << "NO\n";
    }
}
