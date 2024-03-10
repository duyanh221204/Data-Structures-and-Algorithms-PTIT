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
        int k, d = 0, f[92] = {};
        string s;
        cin >> k >> s;
        for (char& i : s)
        {
            ++f[i];
            d = max(f[i], d);
        }
        if ((d - 1) * (k - 1) > s.size() - d) cout << "-1\n";
        else cout << "1\n";
    }
}
