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
        cin >> n;
        int a[n];
        for (int& i : a) cin >> i;
        int x = upper_bound(a, a + n, 0) - a;
        cout << x << "\n";
    }
}
