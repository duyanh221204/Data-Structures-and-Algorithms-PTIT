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
        int n;
        cin >> n;
        set<char> ss;
        while (n--)
        {
            string s;
            cin >> s;
            for (char& i : s) ss.insert(i);
        }
        for (char i : ss) cout << i << " ";
        cout << "\n";
    }
}
