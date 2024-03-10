#include<bits/stdc++.h>
using namespace std;
int k, m, a[22], b[22];
void tt(int x)
{
    for (int i = b[x - 1] + 1; i <= m - k + x; ++i)
    {
        b[x] = i;
        if (x == k)
        {
            for (int j = 1; j <= k; ++j) cout << a[b[j]] << " ";
            cout << "\n";
        }
        else tt(x + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int n;
        cin >> n >> k;
        set<int> s;
        while (n--)
        {
            int y;
            cin >> y;
            s.insert(y);
        }
        m = 1;
        for (int i : s) a[m++] = i;
        --m;
        tt(1);
    }
}
