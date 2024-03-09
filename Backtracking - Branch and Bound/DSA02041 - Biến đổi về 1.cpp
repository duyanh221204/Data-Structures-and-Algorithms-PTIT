#include<bits/stdc++.h>
using namespace std;
int n, dem, d = 2e9;
void tt()
{
    if (dem >= d || n < 1) return;
    if (n == 1)
    {
        d = min(dem, d);
        return;
    }
    ++dem;
    int x = n;
    if (n % 3 == 0)
    {
        n /= 3;
        tt();
    }
    n = x;
    if (n & 1 ^ 1)
    {
        n >>= 1;
        tt();
    }
    n = x;
    --n;
    tt();
    --dem;
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
        tt();
        cout << d << "\n";
        dem = 0;
        d = 2e9;
    }
}
