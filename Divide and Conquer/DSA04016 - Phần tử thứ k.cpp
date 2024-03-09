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
        int m, n, k;
        cin >> m >> n >> k;
        vector<int> v;
        m += n;
        while (m--)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        cout << v[k - 1] << "\n";
    }
}
