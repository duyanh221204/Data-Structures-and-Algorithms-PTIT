#include<bits/stdc++.h>
using namespace std;
int n;
long long k, a[30];
vector<int> v(30);
vector<vector<int>> v1;
void tt(int x)
{
    for (int i = 0; i <= 1; ++i)
    {
        v[x] = i;
        if (x == n)
        {
            long long s = 0;
            for (int j = 1; j <= n; ++j) s += (a[j] * v[j]);
            if (s == k) v1.push_back(v);
        }
        else tt(x + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        tt(1);
        for (vector<int>& i : v1)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (i[j]) cout << a[j] << " ";
            }
            cout << "\n";
        }
        cout << v1.size();
    }
}
