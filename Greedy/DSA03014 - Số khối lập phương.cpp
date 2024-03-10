#include<bits/stdc++.h>
using namespace std;
int y, a[20];
unordered_set<long long> ss;
long long d = -1e18;
string s;
void tt(int x)
{
    for (int i = 0; i <= 1; ++i)
    {
        a[x] = i;
        if (x == y)
        {
            long long m = 0;
            for (int j = 0; j <= y; ++j)
            {
                if (a[j]) (m *= 10) += (s[j] - 48);
            }
            if (m > d && ss.find(m) != ss.end()) d = m;
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
        long long n;
        cin >> n;
        s = to_string(n);
        y = s.size() - 1;
        n = cbrt(n);
        for (int i = 1; i <= n; ++i) ss.insert((long long)i * i * i);
        tt(0);
        if (d == -1e18) cout << "-1\n";
        else cout << d << "\n";
        ss.clear();
        d = -1e18;
        fill(a, a + 20, 0);
    }
}
