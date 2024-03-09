#include<bits/stdc++.h>
using namespace std;
int n, k, s, d, dem, a[22], b[22];
vector<int> v;
void tt(int x)
{
    if (d) return;
    for (int i = 1; i <= n; ++i)
    {
        if (!b[i])
        {
            b[i] = 1;
            if (x == s)
            {
                ++dem;
                //for (int& j : v) cout << j << " ";
                //cout << "\n";
                if (dem == k)
                {
                    d = 1;
                    return;
                }
                else tt(0);
                --dem;
            }
            else if (x < s)
            {
                //v.push_back(a[i]);
                tt(x + s);
                //v.pop_back();
            }
            //else return;
            b[i] = 0;
        }
        b[i] = 0;
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
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            b[i] = 0;
            s += a[i];
        }
        if (s % k) cout << "0";
        else
        {
            s /= k;
            d = dem = 0;
            tt(0);
            cout << d;
        }
        cout << "\n";
        s = 0;
    }
}
