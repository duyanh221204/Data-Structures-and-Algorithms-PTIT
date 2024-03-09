#include<bits/stdc++.h>
using namespace std;
void tt(int x, char a, char b, char c)
{
    if (x == 1) cout << a << " -> " << c << "\n";
    else
    {
        tt(x - 1, a, c, b);
        tt(1, a, b, c);
        tt(x - 1, b, a, c);
    }
}
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
        tt(n, 65, 66, 67);
    }
}
