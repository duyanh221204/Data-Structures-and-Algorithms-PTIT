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
        int a[n + 2];
        multiset<int> ms;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            if (i <= k) ms.insert(a[i]);
        }
        for (int i = k + 1; i <= n; ++i)
        {
            cout << *ms.rbegin() << " ";
            ms.erase(ms.find(a[i - k]));
            ms.insert(a[i]);
        }
        cout << *ms.rbegin() << "\n";
    }
}
