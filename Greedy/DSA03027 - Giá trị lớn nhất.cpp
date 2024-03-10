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
        int n;
        cin >> n;
        long long s = 0;
        while (n--)
        {
            int x;
            cin >> x;
            s += (x + abs(x));
        }
        cout << s;
    }
}
