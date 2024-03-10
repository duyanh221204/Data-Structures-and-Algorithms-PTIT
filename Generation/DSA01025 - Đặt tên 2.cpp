#include<bits/stdc++.h>
using namespace std;
int n, k, a[100];
void tt(int x)
{
    for (int i = a[x - 1] + 1; i <= n - k + x; ++i)
    {
        a[x] = i;
        if (x == k)
        {
            for (int j = 1; j <= k; ++j) cout << (char)(a[j] + 64);
            cout << "\n";
        }
        else tt(x + 1);
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
        tt(1);
    }
}
