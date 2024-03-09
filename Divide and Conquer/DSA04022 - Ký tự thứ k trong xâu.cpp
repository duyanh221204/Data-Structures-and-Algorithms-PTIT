#include<bits/stdc++.h>
using namespace std;
char tt(int n, int k)
{
    if (n == 1) return 65;
    int x = ((1 << n) - 1) >> 1;
    if (k == x + 1) return n + 64;
    if (k <= x) return tt(n - 1, k);
    return tt(n - 1, k - x - 1);
}
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
        cout << tt(n, k) << "\n";
    }
}
