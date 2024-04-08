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
        int v, e, d = 1;
        cin >> v >> e;
        vector<vector<int>> v1(v + 2), v2(v + 2);
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            v1[x].push_back(y);
            v2[y].push_back(x);
        }
        for (int i = 1; i <= v; ++i)
        {
            if (v1[i].size() != v2[i].size())
            {
                d = 0;
                break;
            }
        }
        cout << d << "\n";
    }
}
