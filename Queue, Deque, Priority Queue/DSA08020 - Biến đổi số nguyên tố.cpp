#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1, k[10002] = {};
    cin >> T;
    k[0] = k[1] = 1;
    for (int i = 2; i <= 100; ++i)
    {
        if (!k[i])
        {
            for (int j = i * i; j <= 10000; j += i) k[j] = 1;
        }
    }
    while (T--)
    {
        string s, t;
        cin >> s >> t;
        queue<pair<string, int>> q;
        unordered_map<string, int> mp;
        q.push({s, 0});
        mp[s] = 1;
        while (q.size())
        {
            pair<string, int> p = q.front();
            q.pop();
            if (p.first == t)
            {
                cout << p.second << "\n";
                break;
            }
            for (int i = 0; i < 4; ++i)
            {
                char c = p.first[i];
                for (char j = 57; j >= 48 + !i; --j)
                {
                    p.first[i] = j;
                    if (!mp[p.first] && !k[stoi(p.first)])
                    {
                        mp[p.first] = 1;
                        q.push({p.first, p.second + 1});
                    }
                }
                p.first[i] = c;
            }
        }
    }
}
