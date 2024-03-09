#include<bits/stdc++.h>
using namespace std;
int n, d, s, k, a[12];
vector<int> v;
void tt(int x)
{
    if (s == k)
    {
        d = 1;
        cout << "[";
        for (int i = 0; i < v.size(); ++i)
        {
            cout << v[i];
            if (i < v.size() - 1) cout << " ";
        }
        cout << "] ";
        return;
    }
    if (x > n || s > k) return;
    for (int i = x; i <= n; ++i)
    {
        if (s + a[i] <= k)
        {
            s += a[i];
            v.push_back(a[i]);
            tt(i + 1);
            v.pop_back();
            s -= a[i];
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
        cin >> n >> k;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        sort(a + 1, a + n + 1);
        tt(1);
        if (!d) cout << "-1";
        v.clear();
        d = s = 0;
        cout << "\n";
    }
}
