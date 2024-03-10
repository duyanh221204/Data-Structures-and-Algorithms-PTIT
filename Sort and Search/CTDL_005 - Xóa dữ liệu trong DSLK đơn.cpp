#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n;
        int a[n];
        for (int& i : a) cin >> i;
        cin >> x;
        for (int& i : a)
        {
            if (i != x) cout << i << " ";
        }
    }
}
