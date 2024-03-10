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
        int n, d = 0;
        cin >> n;
        int a[n];
        for (int& i : a) cin >> i;
        for (int i = 0; i < n; ++i)
        {
            int x = i;
            for (int j = i + 1; j < n; ++j)
            {
                if (a[x] > a[j])
                {
                    //++d;
                    //swap(a[x], a[j]);
                    x = j;
                }
                //cout << a[x] << " " << a[j] << "\n";
            }
            if (x > i)
            {
                ++d;
                swap(a[x], a[i]);
            }
        }
        cout << d << "\n";
        //for (int& i : a) cout << i << " ";
        //cout << "\n";
    }
}
