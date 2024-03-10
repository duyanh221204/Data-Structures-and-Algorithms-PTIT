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
        string s;
        cin >> s;
        int x = s.size();
        long long d = 0, f[x];
        f[0] = s[0] - 48;
        for (int i = 1; i < x; ++i)
        {
            f[i] = f[i - 1] * 10 + (s[i] - 48) * (i + 1);
            //cout << f[i] << " ";
            d += f[i];
        }
        cout << d + s[0] - 48 << "\n";
    }
}
