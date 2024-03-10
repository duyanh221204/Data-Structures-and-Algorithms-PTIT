#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int, int>& a, pair<int, int>& b)
{
    return a.first < b.first;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, x, d = -2e9;
        cin >> n;
        pair<int, int> p[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> p[i].first;
            p[i].second = i;
        }
        sort(p, p + n, cmp);
        x = p[0].second;
        for (int i = 1; i < n; ++i)
        {
            d = max(p[i].second - x, d);
            x = min(p[i].second, x);
        }
        cout << d << "\n";
    }
}
