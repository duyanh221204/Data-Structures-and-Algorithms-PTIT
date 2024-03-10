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
        cin >> n >> m;
        int a[n], b[m];
        for (int& i : a) cin >> i;
        for (int& i : b) cin >> i;
        cout << (long long) *max_element(a, a + n) * *min_element(b, b + m) << "\n";
    }
}
