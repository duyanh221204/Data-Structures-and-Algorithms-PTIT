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
        int n, x1 = 0, x2 = 0;
        cin >> n;
        vector<int> v1, v2;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            if (i & 1) v1.push_back(x);
            else v2.push_back(x);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<>());
        for (int i = 1; i <= n; ++i)
        {
            if (i & 1) cout << v1[x1++] << " ";
            else cout << v2[x2++] << " ";
        }
    }
}
