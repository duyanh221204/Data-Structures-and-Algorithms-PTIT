#include<bits/stdc++.h>
using namespace std;
int k, a[100];
vector<string> v;
void tt(int x)
{
    for (int i = a[x - 1] + 1; i <= v.size() - k + x; ++i)
    {
        a[x] = i;
        if (x == k)
        {
            for (int j = 1; j <= k; ++j) cout << v[a[j] - 1] << " ";
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
        int n;
        cin >> n >> k;
        set<string> ss;
        while (n--)
        {
            string s;
            cin >> s;
            ss.insert(s);
        }
        for (auto& i : ss) v.push_back(i);
        tt(1);
    }
}
