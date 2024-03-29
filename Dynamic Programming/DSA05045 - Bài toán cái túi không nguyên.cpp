#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int, int>& a, pair<int, int>& b)
{
    return (double)a.first / a.second > (double)b.first / b.second;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, w;
        cin >> n >> w;
        pair<int, int> p[n];
        for (auto& i : p) cin >> i.first >> i.second;
        double s = 0;
        sort(p, p + n, cmp);
        for (auto& i : p)
        {
            if (w >= i.second)
            {
                s += i.first;
                w -= i.second;
            }
            else
            {
                s += (i.first * ((double)w / i.second));
                break;
            }
        }
        cout << setprecision(2) << fixed << s << "\n";
    }
}
