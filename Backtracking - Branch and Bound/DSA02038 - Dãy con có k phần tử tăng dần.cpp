#include<bits/stdc++.h>
using namespace std;
int n, k, a[17];
vector<int> v1;
vector<vector<int>> v;
void tt(int x)
{
    for (int i = x + 1; i <= n; ++i)
    {
        if (a[x] < a[i])
        {
            v1.push_back(a[i]);
            if (v1.size() == k) v.push_back(v1);
            tt(i);
            v1.pop_back();
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
        tt(0);
        sort(v.begin(), v.end());
        for (vector<int>& i : v)
        {
            for (int& j : i) cout << j << " ";
            cout << "\n";
        }
        v.clear();
        v1.clear();
    }
}
