#include<bits/stdc++.h>
using namespace std;
int d;
string s;
void tt()
{
    int x = s.size() - 2, y = s.size() - 1, l, r;
    while (~x && s[x] >= s[x + 1]) --x;
    if (x < 0)
    {
        d = 1;
        return;
    }
    while (~y && s[x] >= s[y]) --y;
    if (y < 0)
    {
        d = 1;
        return;
    }
    swap(s[x], s[y]);
    l = x + 1;
    r = s.size() - 1;
    while (l < r) swap(s[l++], s[r--]);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int t;
        cin >> t >> s;
        tt();
        cout << t << " ";
        if (d) cout << "BIGGEST\n";
        else cout << s << "\n";
        d = 0;
    }
}
