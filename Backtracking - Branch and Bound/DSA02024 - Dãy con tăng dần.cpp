#include<bits/stdc++.h>
using namespace std;
int n, a[22];
vector<int> v1;
vector<string> v;
void tt(int x)
{
    for (int i = x + 1; i <= n; ++i)
    {
        if (a[x] < a[i])
        {
            v1.push_back(a[i]);
            if (v1.size() > 1)
            {
                string s = "";
                for (int& j : v1) s += (to_string(j) + " ");
                v.push_back(s);
            }
            tt(i);
            v1.pop_back();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        tt(0);
        sort(v.begin(), v.end());
        for (string& i : v) cout << i << "\n";
    }
}
