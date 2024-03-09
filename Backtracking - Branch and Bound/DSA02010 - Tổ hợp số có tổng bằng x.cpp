#include<bits/stdc++.h>
using namespace std;
int n, x, d, s, a[22];
vector<int> v;
void tt(int i)
{
    for (int j = i; j <= n; ++j)
    {
        if (s + a[j] <= x)
        {
            s += a[j];
            v.push_back(a[j]);
            if (s == x)
            {
                d = 1;
                cout << "[";
                for (int k = 0; k < v.size(); ++k)
                {
                    cout << v[k];
                    if (k < v.size() - 1) cout << " ";
                }
                cout << "]";
            }
            else tt(j);
            v.pop_back();
            s -= a[j];
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
        if (!d) cout << "-1";
        d = s = 0;
        v.clear();
        cout << "\n";
    }
}
