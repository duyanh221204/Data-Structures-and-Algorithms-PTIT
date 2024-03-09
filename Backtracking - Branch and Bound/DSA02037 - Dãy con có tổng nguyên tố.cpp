#include<bits/stdc++.h>
using namespace std;
int n, s, a[17];
vector<int> v1;
vector<vector<int>> v;
int kt(int x)
{
    if (x < 4) return x > 1;
    if (x & 1 ^ 1 || x % 3 == 0) return 0;
    int k = sqrt(x);
    for (int i = 5; i <= k; i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0) return 0;
    }
    return 1;
}
void tt(int x)
{
    for (int i = x; i <= n; ++i)
    {
        s += a[i];
        v1.push_back(a[i]);
        if (kt(s)) v.push_back(v1);
        tt(i + 1);
        v1.pop_back();
        s -= a[i];
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
        cin >> n;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        sort(a + 1, a + n + 1, greater<>());
        tt(1);
        sort(v.begin(), v.end());
        for (vector<int>& i : v)
        {
            for (int& j : i) cout << j << " ";
            cout << "\n";
        }
        v.clear();
        v1.clear();
        s = 0;
    }
}
