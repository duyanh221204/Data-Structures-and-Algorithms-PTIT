#include<bits/stdc++.h>
using namespace std;
int n, s, a[17];
vector<int> v1;
vector<vector<int>> v;
void tt(int x)
{
    for (int i = x; i <= n; ++i)
    {
        s += a[i];
        v1.push_back(a[i]);
        if (s & 1) v.push_back(v1);
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
