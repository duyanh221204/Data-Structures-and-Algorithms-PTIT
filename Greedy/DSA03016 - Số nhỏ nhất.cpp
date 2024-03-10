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
        int s, d;
        cin >> s >> d;
        if (s > d * 9) cout << "-1";
        else
        {
            string ss = "", k = "";
            for (int i = 0; i < s / 9; ++i) ss += "9";
            if (s % 9) ss += to_string(s % 9);
            while (ss.size() < d) ss += "0";
            for (int i = d - 1; ~i; --i) k += ss[i];
            if (k[0] == 48)
            {
                for (int i = 1; i < d; ++i)
                {
                    if (k[i] > 48)
                    {
                        ++k[0];
                        --k[i];
                        break;
                    }
                }
            }
            cout << k;
        }
        cout << "\n";
    }
}
