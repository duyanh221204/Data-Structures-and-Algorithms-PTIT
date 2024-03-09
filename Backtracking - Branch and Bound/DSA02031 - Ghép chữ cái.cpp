#include<bits/stdc++.h>
using namespace std;
int n, k[10];
string s, ss;
int ktna(char c)
{
    return c == 65 || c == 69;
}
int kt()
{
    for (int i = 0; i < ss.size(); ++i)
    {
        if (ktna(ss[i]))
        {
            if (i && i < ss.size() - 1)
            {
                if (!ktna(ss[i - 1]) && !ktna(ss[i + 1])) return 0;
            }
        }
    }
    return 1;
}
void tt(int x)
{
    for (int i = 0; i < n; ++i)
    {
        if (!k[i])
        {
            k[i] = 1;
            ss += s[i];
            if (x == n - 1)
            {
                if (kt()) cout << ss << "\n";
            }
            else tt(x + 1);
            ss.pop_back();
            k[i] = 0;
        }
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
        char c;
        cin >> c;
        for (char i = 65; i <= c; ++i) s += i;
        n = c - 64;
        tt(0);
    }
}
