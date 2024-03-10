#include<bits/stdc++.h>
using namespace std;
long long tt1(string& s)
{
    long long d = 0;
    for (char& i : s)
    {
        if (i == 54) i = 53;
        (d *= 10) += (i - 48);
    }
    return d;
}
long long tt2(string& s)
{
    long long d = 0;
    for (char& i : s)
    {
        if (i == 53) i = 54;
        (d *= 10) += (i - 48);
    }
    return d;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << tt1(s1) + tt1(s2) << " " << tt2(s1) + tt2(s2);
    }
}
