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
        cin.ignore();
        vector<vector<int>> v(n + 2);
        for (int i = 1; i <= n; ++i)
        {
            string s;
            getline (cin, s);
            stringstream ss(s);
            while (ss >> s) v[i].push_back(stoi(s));
        }
        for (int i = 1; i <= n; ++i)
        {
            sort(v[i].begin(), v[i].end());
            for (int& j : v[i])
            {
                if (i < j) cout << i << " " << j << "\n";
            }
        }
    }
}
