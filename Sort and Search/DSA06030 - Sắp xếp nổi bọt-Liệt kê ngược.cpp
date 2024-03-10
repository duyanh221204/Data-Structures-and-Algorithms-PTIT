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
        int n, x, d = 0;
        cin >> n;
        vector<int> v(n);
        vector<vector<int>> v1;
        for (int& i : v) cin >> i;
        for (int i = 0; i < n - 1; ++i)
        {
            int h = 0;
            for (int j = 0; j < n - i - 1; ++j)
            {
                if (v[j] > v[j + 1])
                {
                    h = 1;
                    swap(v[j], v[j + 1]);
                }
            }
            if (h)
            {
                ++d;
                v1.push_back(v);
            }
        }
        x = v1.size();
        for (int i = x - 1; ~i; --i)
        {
            cout << "Buoc " << d-- << ": ";
            for (int& j : v1[i]) cout << j << " ";
            cout << "\n";
        }
    }
}
