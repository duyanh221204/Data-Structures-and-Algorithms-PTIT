#include<bits/stdc++.h>
using namespace std;
int n, k, a[20];
vector<vector<int>> v;
void tt(int x)
{
    for (int i = a[x - 1] + 1; i <= n - k + x; ++i)
    {
        a[x] = i;
        if (x == k)
        {
            int b[20] = {};
            vector<int> v1;
            for (int j = 1; j <= k; ++j) b[a[j]] = 1;
            for (int j = 1; j <= n; ++j) v1.push_back(b[j]);
            v.push_back(v1);
        }
        else tt(x + 1);
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
        tt(1);
        for (int i = v.size() - 1; ~i; --i)
        {
            for (int& j : v[i]) cout << j;
            cout << "\n";
        }
        v.clear();
    }
}
