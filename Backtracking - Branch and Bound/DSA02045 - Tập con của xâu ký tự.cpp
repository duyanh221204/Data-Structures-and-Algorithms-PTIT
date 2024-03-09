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
        int n;
        string s;
        cin >> n >> s;
        vector<string> v;
        for (int i = 0; i < 1 << n; ++i)
        {
            string s1 = "";
            for (int j = 0; j < n; ++j)
            {
                if (i & (1 << j)) s1 += s[j];
            }
            if (s1.size()) v.push_back(s1);
        }
        sort(v.begin(), v.end());
        for (string& i : v) cout << i << " ";
        cout << "\n";
    }
}
