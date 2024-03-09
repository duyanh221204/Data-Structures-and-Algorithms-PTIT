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
        int n, s = -2e9, s1 = 0;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            s1 = max(0, s1 + x);
            s = max(s1, s);
        }
        cout << s << "\n";
    }
}
