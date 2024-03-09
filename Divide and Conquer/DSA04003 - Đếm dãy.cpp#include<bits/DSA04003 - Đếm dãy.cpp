#include<bits/stdc++.h>
using namespace std;
int mod = 123456789;
long long tt(long long n)
{
    if (!n) return 1;
    long long x = tt(n >> 1);
    (x *= x) %= mod;
    if (n & 1) (x <<= 1) %= mod;
    return x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        cout << tt(n - 1) << "\n";
    }
}
