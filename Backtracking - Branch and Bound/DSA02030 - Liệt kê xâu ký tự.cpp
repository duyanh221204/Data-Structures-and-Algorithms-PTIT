#include<bits/stdc++.h>
using namespace std;
char c;
int k;
void tt(int dem = 0, char c1 = 65, string s = "")
{
    if (dem == k) cout << s << "\n";
    else
    {
        for (char i = c1; i <= c; ++i) tt(dem + 1, i, s + i);
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
        cin >> c >> k;
        tt();
    }
}
