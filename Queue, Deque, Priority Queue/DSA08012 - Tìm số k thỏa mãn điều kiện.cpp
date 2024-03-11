#include<bits/stdc++.h>
using namespace std;
int kt(string s)
{
    int k[6] = {};
    for (char& i : s)
    {
        ++k[i - 48];
        if (k[i - 48] > 1) return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1, d = 0;
    cin >> T;
    queue<int> q;
    vector<int> v;
    for (int i = 1; i <= 5; ++i)
    {
        q.push(i);
        v.push_back(i);
    }
    while (1)
    {
        int m = q.front();
        q.pop();
        for (int i = 0; i <= 5; ++i)
        {
            int n = m * 10 + i;
            if (kt(to_string(n)))
            {
                v.push_back(n);
                q.push(n);
            }
            if (n == 54321)
            {
                d = 1;
                break;
            }
        }
        if (d) break;
    }
    while (T--)
    {
        int l, r;
        cin >> l >> r;
        int x1 = lower_bound(v.begin(), v.end(), l) - v.begin(), x2 = upper_bound(v.begin(), v.end(), r) - v.begin();
        cout << x2 - x1 << "\n";
    }
}
