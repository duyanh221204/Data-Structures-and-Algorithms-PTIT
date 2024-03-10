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
        int a[n + 2][n + 2] = {};
        for (int i = 1; i <= n; ++i)
        {
            string s;
            getline (cin, s);
            stringstream ss(s);
            while (ss >> s) a[i][stoi(s)] = a[stoi(s)][i] = 1;
        }
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j) cout << a[i][j] << " ";
            cout << "\n";
        }
    }
}
