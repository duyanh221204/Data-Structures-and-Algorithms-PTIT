#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        unordered_map<int, int> mp;
        for (int& i : a)
        {
            cin >> i;
            if (!mp[i])
            {
                cout << i << " ";
                mp[i] = 1;
            }
        }
    }
}
