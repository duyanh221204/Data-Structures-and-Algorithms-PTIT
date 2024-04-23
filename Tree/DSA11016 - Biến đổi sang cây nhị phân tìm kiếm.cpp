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
        set<int> ss;
        while (n--)
        {
            int par, child;
            char dir;
            cin >> par >> child >> dir;
            ss.insert(par);
            ss.insert(child);
        }
        for (int i : ss) cout << i << " ";
        cout << "\n";
    }
}
