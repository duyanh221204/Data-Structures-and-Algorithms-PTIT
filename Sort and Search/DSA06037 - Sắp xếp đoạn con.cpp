#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n + 2], l[n + 2] = {}, r[n + 2] = {};
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            //l[i] = max(l[i - 1], a[i]);
            l[i] = -2e9;
            r[i] = 2e9;
        }
        l[0] = -2e9;
        for (int i = 1; i <= n; ++i)
        {
            l[i] = max(l[i - 1], a[i]);
            //cout << l[i] << " ";
        }
        r[n + 1] = 2e9;
        //cout << "\n";
        for (int i = n; i; --i)
        {
            r[i] = min(r[i + 1], a[i]);
            //cout << r[i] << " ";
        }
        //cout << "\n";
        vector<int> v;
        for (int i = 1; i < n; ++i)
        {
            //cout << l[i - 1] << " " << l[i] << " " << r[i] << " " << r[i + 1] << "\n";
            if (l[i] <= r[i + 1]) v.push_back(i);
        }
        cout << v.size() << "\n";
        for (int& i : v) cout << i << " ";
        cout << "\n";
    }
}
