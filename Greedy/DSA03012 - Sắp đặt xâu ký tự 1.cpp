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
        int d = 0, x = s.size(), k[123] = {};
        for (char& i : s)
        {
            ++k[i];
            d = max(k[i], d);
        }
        if (x - d + 1 >= d) cout << "1\n";
        else cout << "-1\n";
    }
}
