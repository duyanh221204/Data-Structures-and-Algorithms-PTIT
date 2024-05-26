#include<bits/stdc++.h>
using namespace std;
int par[102];
int tim(int x)
{
    while (x != par[x]) x = par[x];
    return x;
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
        cin >> n;
        pair<double, double> p[n];
        for (auto& i : p) cin >> i.first >> i.second;
        for (int i = 1; i <= n; ++i) par[i] = i;
        vector<pair<double, pair<int, int>>> v;
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j) v.push_back({sqrt((p[i].first - p[j].first) * (p[i].first - p[j].first) + (p[i].second - p[j].second) * (p[i].second - p[j].second)), {i + 1, j + 1}});
        }
        sort(v.begin(), v.end());
        double s = 0;
        for (auto& i : v)
        {
            int x = tim(i.second.first), y = tim(i.second.second);
            if (x != y)
            {
                //cout << i.first << "\n";
                s += i.first;
                par[x] = y;
            }
        }
        cout << setprecision(6) << fixed << s << "\n";
    }
}
