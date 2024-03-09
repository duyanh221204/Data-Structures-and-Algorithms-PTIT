#include<bits/stdc++.h>
using namespace std;
long long tt(long long n, long long k)
{
    long long x = 1LL << (n - 1);
    if (k == x) return n;
    if (k > x) return tt(n - 1, k - x);
    return tt(n - 1, k);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        long long n, k;
        cin >> n >> k;
        cout << tt(n, k) << "\n";
    }
}
