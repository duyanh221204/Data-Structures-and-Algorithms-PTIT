#include<bits/stdc++.h>
using namespace std;
string s;
long long k;
char tt(long long n)
{
    if (k <= s.size()) return s[n - 1];
    k >>= 1;
    if (k >= n) return tt(n);
    if (n - k > 1) return tt(n - k - 1);
    return tt(k);
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
        cin >> s >> n;
        k = s.size();
        while (k < n) k <<= 1;
        cout << tt(n) << "\n";
    }
}
