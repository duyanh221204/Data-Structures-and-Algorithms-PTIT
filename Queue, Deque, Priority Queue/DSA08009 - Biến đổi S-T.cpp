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
        int s, t, d = 0;
        cin >> s >> t;
        while (s < t)
        {
            if (t & 1) ++t;
            else t >>= 1;
            ++d;
        }
        cout << s - t + d << "\n";
    }
}
