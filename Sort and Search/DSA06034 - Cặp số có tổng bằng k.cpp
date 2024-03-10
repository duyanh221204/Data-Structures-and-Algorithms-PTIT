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
        int a[n];
        unordered_map<int, int> mp;
        for (int& i : a)
        {
            cin >> i;
            ++mp[i];
        }
        long long d = 0;
        if ((k & 1 ^ 1) && mp[k >> 1])
        {
            d += ((long long)mp[k >> 1] * (mp[k >> 1] - 1) >> 1);
            mp[k >> 1] = 0;
        }
        for (int& i : a)
        {
            if (k - i >= 0 && mp[i] && mp[k - i])
            {
                d += ((long long)mp[i] * mp[k - i]);
                mp[i] = mp[k - i] = 0;
            }
        }
        cout << d << "\n";
    }
}
