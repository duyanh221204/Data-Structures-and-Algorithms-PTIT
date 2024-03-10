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
        int k;
        string s;
        cin >> k >> s;
        if (k >= s.size()) cout << "0";
        else
        {
            int f[26] = {};
            for (char& i : s) ++f[i - 65];
            sort(f, f + 26);
            while (k)
            {
                if (f[25] > f[24])
                {
                    --f[25];
                    --k;
                }
                else
                {
                    int d = f[25];
                    for (int i = 25; ~i; --i)
                    {
                        if (!k) break;
                        if (f[i] == d)
                        {
                            --f[i];
                            --k;
                        }
                        else break;
                    }
                }
            }
            long long sum = 0;
            for (int i = 0; i <= 25; ++i)
            {
                if (f[i]) sum += ((long long)f[i] * f[i]);
            }
            cout << sum;
        }
        cout << "\n";
    }
}
