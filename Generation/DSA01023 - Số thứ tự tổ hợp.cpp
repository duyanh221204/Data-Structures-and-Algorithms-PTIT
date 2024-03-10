#include<bits/stdc++.h>
using namespace std;
int n, d, k;
vector<int> v(20);
void tt()
{
    int x = k;
    while (x && v[x] == n - k + x) --x;
    if (!x)
    {
        d = 1;
        return;
    }
    ++v[x];
    for (int i = x + 1; i <= k; ++i) v[i] = v[i - 1] + 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        vector<int> v1(20);
        for (int i = 1; i <= k; ++i)
        {
            cin >> v1[i];
            v[i] = i;
        }
        int dem = 1;
        while (v != v1)
        {
            ++dem;
            tt();
        }
        cout << dem << "\n";
        d = 0;
    }
}
