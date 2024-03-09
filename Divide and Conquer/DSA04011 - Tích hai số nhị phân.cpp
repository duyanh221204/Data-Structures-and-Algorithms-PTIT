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
        string s1, s2;
        cin >> s1 >> s2;
        long long x1 = 0, x2 = 0, d1 = s1.size(), d2 = s2.size();
        for (long long i = 0; i < d1; ++i) x1 += ((long long)(s1[i] - 48) * (1LL << (d1 - i - 1)));
        for (long long i = 0; i < d2; ++i) x2 += ((long long)(s2[i] - 48) * (1LL << (d2 - i - 1)));
        //cout << x1 << " " << x2 << "\n";
        cout << x1 * x2 << "\n";
    }
}
