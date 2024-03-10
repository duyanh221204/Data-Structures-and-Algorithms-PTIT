#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int kt()
{
    for (int i = 1; i < v.size(); ++i)
    {
        if (v[i] > v[i - 1]) return 0;
    }
    return 1;
}
void tt(int x)
{
    if (!x)
    {
        if (kt())
        {
            cout << "(";
            for (int i = 0; i < v.size(); ++i)
            {
                cout << v[i];
                if (i < v.size() - 1) cout << " ";
            }
            cout << ") ";
        }
        return;
    }
    for (int i = x; i; --i)
    {
        if (x >= i)
        {
            v.push_back(i);
            tt(x - i);
            v.pop_back();
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
        int n;
        cin >> n;
        tt(n);
        cout << "\n";
    }
}
