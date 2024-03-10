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
        int n, m1 = 2e9, m2 = -2e9, d = 0, k[100002] = {};
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            k[x] = 1;
            m1 = min(x, m1);
            m2 = max(x, m2);
        }
        for (int i = m1; i <= m2; ++i)
        {
            if (!k[i]) ++d;
        }
        cout << d << "\n";
    }
}
