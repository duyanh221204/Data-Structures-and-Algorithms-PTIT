#include<bits/stdc++.h>
using namespace std;
int n, k, h, a[42];
void tt()
{
    int x = k;
    while (x && a[x] == n - k + x) --x;
    if (!x)
    {
        h = 1;
        return;
    }
    ++a[x++];
    for (int i = x; i <= k; ++i) a[i] = a[i - 1] + 1;
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
        unordered_map<int, int> mp;
        for (int i = 1; i <= k; ++i)
        {
            cin >> a[i];
            ++mp[a[i]];
        }
        tt();
        if (h) cout << k << "\n";
        else
        {
            int d = 0;
            for (int i = 1; i <= k; ++i)
            {
                if (!mp[a[i]]) ++d;
            }
            cout << d << "\n";
        }
        h = 0;
    }
}
