#include<bits/stdc++.h>
using namespace std;
int n, k, b[32];
vector<string> v;
void tt(int x)
{
    for (int i = b[x - 1] + 1; i <= v.size() - k + x; ++i)
    {
        b[x] = i;
        if (x == k)
        {
            for (int j = 1; j <= k; ++j) cout << v[b[j] - 1] << " ";
            cout << "\n";
        }
        else tt(x + 1);
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
        cin >> n >> k;
        set<string> ss;
        while (n--)
        {
            string s;
            cin >> s;
            ss.insert(s);
        }
        for (string i : ss) v.push_back(i);
        tt(1);
    }
}
