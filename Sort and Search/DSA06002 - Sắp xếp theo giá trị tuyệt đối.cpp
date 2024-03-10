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
        int n, k;
        cin >> n >> k;
        int a[n];
        pair<int, int> p[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            p[i].first = abs(a[i] - k);
            p[i].second = i;
        }
        stable_sort(p, p + n);
        for (auto& i : p) cout << a[i.second] << " ";
        cout << "\n";
    }
}
