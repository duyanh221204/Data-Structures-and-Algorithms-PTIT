#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.second < b.second;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, d = 0, m = 0;
        cin >> n;
        pair<int, int> p[n];
        for (auto& i : p) cin >> i.first >> i.second;
        sort(p, p + n, cmp);
        for (auto& i : p)
        {
            if (i.first >= m)
            {
                ++d;
                m = i.second;
            }
        }
        cout << d << "\n";
    }
}
