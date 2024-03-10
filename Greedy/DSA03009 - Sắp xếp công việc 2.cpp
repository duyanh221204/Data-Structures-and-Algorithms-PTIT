#include<bits/stdc++.h>
using namespace std;
struct ds
{
    int id, dl, pf;
};
int cmp(ds& a, ds& b)
{
    return a.pf > b.pf;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, d = 0, s = 0, k[1002] = {};
        cin >> n;
        ds a[n];
        for (ds& i : a) cin >> i.id >> i.dl >> i.pf;
        sort(a, a + n, cmp);
        for (ds& i : a)
        {
            while (k[i.dl] && i.dl) --i.dl;
            if (!k[i.dl] && i.dl)
            {
                ++k[i.dl];
                ++d;
                s += i.pf;
            }
        }
        cout << d << " " << s << "\n";
    }
}
