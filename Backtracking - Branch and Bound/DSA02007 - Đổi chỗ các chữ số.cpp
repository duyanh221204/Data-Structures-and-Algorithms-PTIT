#include<bits/stdc++.h>
using namespace std;
int k;
string s, s1;
void tt(int x)
{
    if (x == s.size() - 1 || !k)
    {
        if (s > s1) s1 = s;
    }
    else
    {
        tt(x + 1);
        for (int i = x + 1; i < s.size(); ++i)
        {
            if (s[i] > s[x])
            {
                swap(s[i], s[x]);
                --k;
                tt(x + 1);
                ++k;
                swap(s[i], s[x]);
            }
        }
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
        cin >> k >> s;
        s1 = s;
        tt(0);
        cout << s1 << "\n";
    }
}
