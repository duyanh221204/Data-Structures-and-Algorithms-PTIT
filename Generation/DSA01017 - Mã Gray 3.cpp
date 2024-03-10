#include<bits/stdc++.h>
using namespace std;
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
        cout << s[0];
        for (int i = 1; i < s.size(); ++i)
        {
            if (s[i] == s[i - 1]) cout << "0";
            else cout << "1";
        }
        cout << "\n";
    }
}
