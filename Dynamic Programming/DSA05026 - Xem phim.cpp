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
        int c, n;
        cin >> c >> n;
        int a[n], f[25002] = {};
        for (int& i : a) cin >> i;
        f[0] = 1;
        for (int& i : a)
        {
            for (int j = c; j >= i; --j)
            {
                if (f[j - i]) f[j] = 1;
            }
        }
        for (int i = c; i; --i)
        {
            if (f[i])
            {
                cout << i;
                break;
            }
        }
    }
}
