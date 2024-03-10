#include<bits/stdc++.h>
using namespace std;
int n, k, d, a[1002];
void tt()
{
    int x = k;
    while (x && a[x] == n - k + x) --x;
    if (!x)
    {
        d = 1;
        return;
    }
    ++a[x];
    for (int i = x + 1; i <= k; ++i) a[i] = a[i - 1] + 1;
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
        for (int i = 1; i <= k; ++i) a[i] = i;
        while (!d)
        {
            for (int i = 1; i <= k; ++i) cout << a[i];
            cout << " ";
            tt();
        }
        cout << "\n";
        d = 0;
    }
}
