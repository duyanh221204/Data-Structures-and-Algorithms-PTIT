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
        int n, s, m;
        cin >> n >> s >> m;
        if (s * m > (s - s / 7) * n) cout << "-1\n";
        else if (s * m == (s - s / 7) * n) cout << s - s / 7 << "\n";
        else
        {
            for (int i = 1; i <= s - s / 7; ++i)
            {
                if (n * i >= s * m)
                {
                    cout << i << "\n";
                    break;
                }
            }
        }
    }
}
