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
        int n1, n2, n3, d = 0, x1 = 0, x2 = 0, x3 = 0;
        cin >> n1 >> n2 >> n3;
        long long a[n1], b[n2], c[n3];
        for (long long& i : a) cin >> i;
        for (long long& i : b) cin >> i;
        for (long long& i : c) cin >> i;
        while (x1 < n1 && x2 < n2 && x3 < n3)
        {
            if (a[x1] == b[x2] && b[x2] == c[x3])
            {
                d = 1;
                cout << a[x1++] << " ";
                ++x2, ++x3;
            }
            else if (a[x1] < b[x2]) ++x1;
            else if (b[x2] < c[x3]) ++x2;
            else ++x3;
        }
        if (!d) cout << "-1";
        cout << "\n";
    }
}
