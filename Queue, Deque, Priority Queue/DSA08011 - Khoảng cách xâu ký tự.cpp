#include<bits/stdc++.h>
using namespace std;
unordered_set<string> ss;
int tt(string& s1, string& s2)
{
    if (s1 == s2) return 0;
    queue<pair<string, int>> q;
    q.push({s1, 1});
    while (q.size())
    {
        pair<string, int> p = q.front();
        q.pop();
        if (p.first == s2) return p.second;
        for (char& i : p.first)
        {
            char c = i;
            for (char j = 65; j <= 90; ++j)
            {
                i = j;
                if (ss.find(p.first) != ss.end())
                {
                    q.push({p.first, p.second + 1});
                    ss.erase(p.first);
                }
            }
            i = c;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        string s1, s2;
        cin >> n >> s1 >> s2;
        while (n--)
        {
            string s;
            cin >> s;
            ss.insert(s);
        }
        cout << tt(s1, s2) << "\n";
    }
}
