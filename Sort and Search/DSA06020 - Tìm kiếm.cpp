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
        int n, x, d = -1;
        cin >> n >> x;
        while (n--)
        {
            int y;
            cin >> y;
            if (x == y) d = 1;
        }
        cout << d << "\n";
    }
}
