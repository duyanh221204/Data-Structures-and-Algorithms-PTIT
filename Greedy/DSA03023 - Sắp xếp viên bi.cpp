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
        int n, d = 0, d1 = 0, d2 = 0, k[92] = {};
        string s;
        cin >> n >> s;
        for (char& i : s) ++k[i];
        for (int i = 0; i < k[88]; ++i)
        {
            if (s[i] != 88)
            {
                ++d;
                if (s[i] == 68) ++d1;
            }
        }
        for (int i = n - k[68]; i < n; ++i)
        {
            if (s[i] != 68)
            {
                ++d;
                if (s[i] == 88) ++d2;
            }
        }
        cout << d - min(d1, d2) << "\n";
    }
}
