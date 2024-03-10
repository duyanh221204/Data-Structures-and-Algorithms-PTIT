#include<bits/stdc++.h>
using namespace std;
int n, a[12], k[12];
vector<int> v;
void tt(int x)
{
    for (int i = 1; i <= n; ++i)
    {
        if (!k[i])
        {
            k[i] = 1;
            v.push_back(a[i]);
            if (x == n)
            {
                for (int& j : v) cout << j << " ";
                cout << "\n";
            }
            else tt(x + 1);
            v.pop_back();
            k[i] = 0;
        }
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
        cin >> n;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        sort(a + 1, a + n + 1);
        tt(1);
    }
}
