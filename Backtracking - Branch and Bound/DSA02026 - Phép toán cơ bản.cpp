#include<bits/stdc++.h>
using namespace std;
string s, k, d = "+-";
int h;
int kt()
{
    int x = stoi(s.substr(0, 2)), y = stoi(s.substr(5, 2));
    if (s[3] == 43) x += y;
    else x -= y;
    return to_string(x) == s.substr(10, 2);
}
void tt(int x)
{
    if (x == s.size())
    {
        if (kt())
        {
            h = 1;
            if (!k.size() || s < k) k = s;
        }
        return;
    }
    if (s[x] != 63)
    {
        if (!h) tt(x + 1);
        return;
    }
    if (x == 3)
    {
        for (char& i : d)
        {
            char c = s[x];
            s[x] = i;
            tt(x + 1);
            s[x] = c;
        }
    }
    else
    {
        for (char i = 48 + (!x || x == 5 || x == 10); i <= 57; ++i)
        {
            char c = s[x];
            s[x] = i;
            tt(x + 1);
            s[x] = c;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        getline (cin, s);
        if (s[3] == 42 || s[3] == 47) cout << "WRONG PROBLEM!";
        else
        {
            h = 0;
            k = "";
            tt(0);
            if (!h) cout << "WRONG PROBLEM!";
            else cout << k;
        }
        cout << "\n";
    }
}
