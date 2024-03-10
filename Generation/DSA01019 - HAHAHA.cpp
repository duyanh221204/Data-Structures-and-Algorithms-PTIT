#include<bits/stdc++.h>
using namespace std;
int n;
char a[20];
string c = "AH";
void tt(int x)
{
    for (int i = 0; i <= 1; ++i)
    {
        if (a[x - 1] == 65 || !i)
        {
            a[x] = c[i];
            if (x == n - 1)
            {
                for (int j = 1; j <= n; ++j) cout << a[j];
                cout << "\n";
            }
            else tt(x + 1);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        cin >> n;
        if (n == 2) cout << "HA\n";
        else
        {
            a[1] = 72;
            a[n] = 65;
            tt(2);
        }
    }
}
