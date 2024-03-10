#include<bits/stdc++.h>
using namespace std;
int a[1000002];
void merge(int l, int x, int r)
{
    vector<int> v1(a + l, a + x + 1), v2(a + x + 1, a + r + 1);
    int l1 = 0, r1 = 0, d1 = v1.size(), d2 = v2.size();
    while (l1 < d1 && r1 < d2)
    {
        if (v1[l1] <= v2[r1]) a[l++] = v1[l1++];
        else a[l++] = v2[r1++];
    }
    while (l1 < d1) a[l++] = v1[l1++];
    while (r1 < d2) a[l++] = v2[r1++];
}
void tt(int l, int r)
{
    if (l < r)
    {
        int mid = l + r >> 1;
        tt(l, mid);
        tt(mid + 1, r);
        merge(l, mid, r);
    }
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
        for (int i = 0; i < n; ++i) cin >> a[i];
        tt(0, n - 1);
        for (int i = 0; i < n; ++i) cout << a[i] << " ";
        cout << "\n";
    }
}
