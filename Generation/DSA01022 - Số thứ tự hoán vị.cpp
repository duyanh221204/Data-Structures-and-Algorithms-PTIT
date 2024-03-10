#include<bits/stdc++.h>
using namespace std;
int n, d;
vector<int> v(12);
void tt()
{
    int x = n - 1, y = n, l, r;
    while (x && v[x] > v[x + 1]) --x;
    if (!x)
    {
        d = 1;
        return;
    }
    while (y && v[x] > v[y]) --y;
    if (!y)
    {
        d = 1;
        return;
    }
    swap(v[x], v[y]);
    l = x + 1;
    r = n;
    while (l < r) swap(v[l++], v[r--]);
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
        vector<int> v1(12);
        for (int i = 1; i <= n; ++i)
        {
            cin >> v1[i];
            v[i] = i;
        }
        int dem = 1;
        while (v != v1)
        {
            ++dem;
            tt();
        }
        cout << dem << "\n";
        d = 0;
    }
}
