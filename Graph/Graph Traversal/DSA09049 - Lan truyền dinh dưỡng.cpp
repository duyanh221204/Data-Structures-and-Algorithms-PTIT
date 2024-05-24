#include<bits/stdc++.h>
using namespace std;
long long k[200002];
vector<vector<int>> g(200002);
long long tt(int x)
{
    long long s = 0;
    for (int& i : g[x])
    {
        s += tt(i);
        //cout << k[x] << " " << k[i] << " " << s << "\n";
        k[x] += k[i];
    }
    k[x] += s;
    //cout << k[x] << " " << s << "\n";
    return s + 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        k[1] = 1;
        for (int i = 2; i <= n; ++i)
        {
            int x;
            cin >> x;
            g[x].push_back(i);
            k[i] = 1;
        }
        tt(1);
        for (int i = 1; i <= n; ++i) cout << k[i] << " ";
    }
}
