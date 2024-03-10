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
        int n, x;
        cin >> n >> x;
        int a[n], k[1000002] = {};
        for (int& i : a)
        {
            cin >> i;
            ++k[i];
        }
        if (!k[x]) cout << "-1\n";
        else cout << k[x] << "\n";
    }
}
