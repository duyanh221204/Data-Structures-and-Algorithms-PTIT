#include<bits/stdc++.h>
using namespace std;
int n, k[12];
string s, ss;
void tt(int x)
{
    for (int i = 0; i < n; ++i)
    {
        if (!k[i])
        {
            k[i] = 1;
            ss += s[i];
            if (x == n - 1) cout << ss << " ";
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
    cin >> T;
    while (T--)
    {
        cin >> s;
        ss = "";
        n = s.size();
        tt(0);
        cout << "\n";
    }
}
