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
        int n, m;
        cin >> n;
        vector<string> v1, v2;
        while (n--)
        {
            int par, child;
            char dir;
            cin >> par >> child >> dir;
            string s = to_string(par) + to_string(child) + dir;
            v1.push_back(s);
        }
        cin >> m;
        while (m--)
        {
            int par, child;
            char dir;
            cin >> par >> child >> dir;
            string s = to_string(par) + to_string(child) + dir;
            v2.push_back(s);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        cout << (v1 == v2) << "\n";
    }
}
