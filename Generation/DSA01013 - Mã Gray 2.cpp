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
        string s, k = "";
        cin >> s;
        k += s[0];
        for (int i = 1; i < s.size(); ++i)
        {
            if (k.back() == s[i]) k += 48;
            else k += 49;
        }
        cout << k << "\n";
    }
}
