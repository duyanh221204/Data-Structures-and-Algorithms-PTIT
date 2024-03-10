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
        int n, m;
        cin >> n >> m;
        set<int> s1, s2, s3;
        while (n--)
        {
            int x;
            cin >> x;
            s1.insert(x);
            s3.insert(x);
        }
        while (m--)
        {
            int x;
            cin >> x;
            if (s1.find(x) != s1.end()) s2.insert(x);
            s3.insert(x);
        }
        for (int i : s3) cout << i << " ";
        cout << "\n";
        for (int i : s2) cout << i << " ";
        cout << "\n";
    }
}
