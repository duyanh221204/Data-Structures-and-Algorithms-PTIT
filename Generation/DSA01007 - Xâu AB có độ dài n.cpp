#include<bits/stdc++.h>
using namespace std;
void tt(int n, int dem = 0, string s = "")
{
    if (dem == n) cout << s << " ";
    else
    {
        for (char i = 65; i <= 66; ++i) tt(n, dem + 1, s + i);
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
        tt(n);
        cout << "\n";
    }
}
