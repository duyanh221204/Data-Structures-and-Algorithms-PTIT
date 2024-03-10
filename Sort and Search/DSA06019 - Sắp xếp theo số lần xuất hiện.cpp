#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int, int>& a, pair<int, int>& b)
{
    if (a.first != b.first) return a.first > b.first;
    return a.second < b.second;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n], k[100002] = {};
        for (int& i : a)
        {
            cin >> i;
            ++k[i];
        }
        vector<pair<int, int>> v;
        for (int& i : a) v.push_back({k[i], i});
        sort(v.begin(), v.end(), cmp);
        for (auto& i : v) cout << i.second << " ";
        cout << "\n";
    }
}
