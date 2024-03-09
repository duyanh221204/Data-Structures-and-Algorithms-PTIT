#include<bits/stdc++.h>
using namespace std;
string s = "2000", c = "02";
vector<string> v;
void tt(int x)
{
    for (int i = 0; i <= 1; ++i)
    {
        s[x] = c[i];
        if (x == 3) v.push_back(s);
        else tt(x + 1);
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
        vector<string> v1;
        v1.push_back("02");
        v1.push_back("20");
        v1.push_back("22");
        tt(1);
        for (string& i : v1)
        {
            for (string& j : v) cout << i << "/02/" << j << "\n";
        }
    }
}
