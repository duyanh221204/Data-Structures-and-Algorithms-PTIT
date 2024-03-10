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
        int n;
        cin >> n;
        queue<pair<int, int>> q;
        unordered_map<int, int> mp;
        q.push({n, 0});
        mp[n] = 1;
        while (q.size())
        {
            pair<int, int> p = q.front();
            q.pop();
            if (p.first == 1)
            {
                cout << p.second << "\n";
                break;
            }
            if (p.first == 2)
            {
                cout << p.second + 1 << "\n";
                break;
            }
            int x = sqrt(p.first);
            for (int i = 2; i <= x; ++i)
            {
                if (p.first % i == 0 && !mp[p.first / i])
                {
                    q.push({p.first / i, p.second + 1});
                    mp[p.first / i] = 1;
                }
            }
            if (p.first - 1 > 0 && !mp[p.first - 1])
            {
                q.push({p.first - 1, p.second + 1});
                mp[p.first - 1] = 1;
            }
        }
    }
}
