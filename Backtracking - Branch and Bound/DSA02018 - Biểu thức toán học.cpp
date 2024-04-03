#include<bits/stdc++.h>
using namespace std;
int d, a[6], k[6];
vector<int> v(6), v1;
vector<vector<int>> dau;
void hv()
{
    for (int i = 1; i <= 3; ++i)
    {
        v1.push_back(i);
        if (v1.size() == 4) dau.push_back(v1);
        else hv();
        v1.pop_back();
    }
}
int kt()
{
    for (vector<int>& i : dau)
    {
        int m = a[v[0]];
        //cout << m << "\n";
        for (int j = 0; j < 4; ++j)
        {
            //cout << i[j] << " ";
            if (i[j] == 1) m += a[v[j + 1]];
            if (i[j] == 2) m -= a[v[j + 1]];
            if (i[j] == 3) m *= a[v[j + 1]];
            //cout << m << " " << a[v[j + 1]] << "\n";
        }
        if (m == 23) return 1;
    }
    return 0;
}
void tt(int x)
{
    for (int i = 0; i <= 4; ++i)
    {
        if (!k[i])
        {
            k[i] = 1;
            v[x] = i;
            if (x == 4)
            {
                //for (int& j : v) cout << j << " ";
                //cout << "\n";
                if (kt())
                {
                    d = 1;
                    return;
                }
            }
            if (d) return;
            else tt(x + 1);
            k[i] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    hv();
    /*for (vector<int>& i : dau)
    {
        for (int& j : i) cout << j << " ";
        cout << "\n";
    }*/
    //1+ 2- 3*
    while (T--)
    {
        for (int i = 0; i < 5; ++i) cin >> a[i];
        tt(0);
        if (d) cout << "YES\n";
        else cout << "NO\n";
        d = 0;
        v.clear();
        v1.clear();
        fill(k, k + 6, 0);
    }
}
