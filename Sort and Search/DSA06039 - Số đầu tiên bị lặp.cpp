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
        int n, d = 0;
        cin >> n;
        int a[n];
        unordered_map<int, int> mp;
        for (int& i : a)
        {
            cin >> i;
            ++mp[i];
        }
        for (int& i : a)
        {
            if (mp[i] > 1)
            {
                d = 1;
                cout << i << "\n";
                break;
            }
        }
        if (!d) cout << "NO\n";
    }
}
