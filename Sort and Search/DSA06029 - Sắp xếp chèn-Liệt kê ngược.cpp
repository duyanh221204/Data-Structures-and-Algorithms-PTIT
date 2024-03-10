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
        int n, d, x;
        cin >> n;
        vector<int> v(n);
        vector<vector<int>> v1;
        for (int& i : v) cin >> i;
        for (int i = 0; i < n; ++i)
        {
            int k = v[i], h = i - 1;
            while (~h && v[h] > k)
            {
                v[h + 1] = v[h];
                --h;
            }
            v[h + 1] = k;
            vector<int> tmp;
            for (int j = 0; j <= i; ++j) tmp.push_back(v[j]);
            v1.push_back(tmp);
        }
        d = n;
        x = v1.size();
        for (int i = x - 1; ~i; --i)
        {
            cout << "Buoc " << --d << ": ";
            for (int& j : v1[i]) cout << j << " ";
            cout << "\n";
        }
    }
}
