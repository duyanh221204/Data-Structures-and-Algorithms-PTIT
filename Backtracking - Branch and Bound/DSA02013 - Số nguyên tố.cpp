#include<bits/stdc++.h>
using namespace std;
int n, s, t, d = 1, a[302];
vector<int> v1;
vector<string> v;
int kt(int x)
{
    if (x < 4) return x > 1;
    if (x % 2 == 0 || x % 3 == 0) return 0;
    int k = sqrt(x);
    for (int i = 5; i <= k; i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0) return 0;
    }
    return 1;
}
void tt(int x)
{
    if (t == s && v1.size() == n)
    {
        string ss = "";
        for (int& i : v1) ss += (to_string(i) + " ");
        ss.pop_back();
        v.push_back(ss);
        return;
    }
    if (v1.size() > n || t > s) return;
    for (int i = x; i <= d; ++i)
    {
        t += a[i];
        v1.push_back(a[i]);
        tt(i + 1);
        v1.pop_back();
        t -= a[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1, x = 3;
    cin >> T;
    a[d++] = 2;
    while (d <= 300)
    {
        if (kt(x)) a[d++] = x;
        ++x;
    }
    --d;
    while (T--)
    {
        int p, m;
        cin >> n >> p >> s;
        m = upper_bound(a + 1, a + d + 1, p) - a;
        tt(m);
        cout << v.size() << "\n";
        sort(v.begin(), v.end());
        for (string& i : v) cout << i << "\n";
        v.clear();
        v1.clear();
        t = 0;
    }
}
