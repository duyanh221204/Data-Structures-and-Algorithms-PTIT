#include<bits/stdc++.h>
using namespace std;
int n, x, s, a[22];
vector<int> v1;
vector<vector<int>> v;
void tt(int k)
{
    if (s == x)
    {
        v.push_back(v1);
        return;
    }
    if (s > x || k > n) return;
    for (int i = k; i <= n; ++i)
    {
        if (s + a[i] <= x)
        {
            s += a[i];
            v1.push_back(a[i]);
            tt(i);
            v1.pop_back();
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
        cin >> n >> x;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        tt(1);
        if (!v.size()) cout << "-1";
        else
        {
            cout << v.size() << " ";
            for (vector<int>& i : v)
            {
                cout << "{";
                for (int j = 0; j < i.size(); ++j)
                {
                    cout << i[j];
                    if (j < i.size() - 1) cout << " ";
                }
                cout << "} ";
            }
        }
        s = 0;
        v.clear();
        v1.clear();
        cout << "\n";
    }
}
