#include<bits/stdc++.h>
using namespace std;
void tt(string& s)
{
    int x = s.size() - 1, x1 = s.size();
    while (~x && s[x] == 49) --x;
    if (x < 0)
    {
        x = 0;
        s[x] = 48;
    }
    else s[x] = 49;
    for (int i = x + 1; i < x1; ++i) s[i] = 48;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        tt(s);
        cout << s << "\n";
    }
}
