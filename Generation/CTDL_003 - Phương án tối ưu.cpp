#include<bits/stdc++.h>
using namespace std;
int n, w, s1, s2, d, a[102], c[102];
vector<int> v, v1;
void tt(int x)
{
    for (int i = 0; i <= 1; ++i)
    {
        if (s1 + a[x] * i <= w)
        {
            v.push_back(i);
            s1 += (a[x] * i);
            s2 += (c[x] * i);
            if (x == n)
            {
                if (s2 > d)
                {
                    d = s2;
                    v1 = v;
                }
            }
            else tt(x + 1);
            s2 -= (c[x] * i);
            s1 -= (a[x] * i);
            v.pop_back();
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
        cin >> n >> w;
        for (int i = 1; i <= n; ++i) cin >> c[i];
        for (int i = 1; i <= n; ++i) cin >> a[i];
        tt(1);
        cout << d << "\n";
        for (int& i : v1) cout << i << " ";
    }
}
