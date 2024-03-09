#include<bits/stdc++.h>
using namespace std;
vector<int> v1;
vector<vector<int>> v;
int kt()
{
    for (int i = 1; i < v1.size(); ++i)
    {
        if (v1[i] > v1[i - 1]) return 0;
    }
    return 1;
}
void tt(int x)
{
    if (!x)
    {
        if (kt()) v.push_back(v1);
        return;
    }
    for (int i = x; i; --i)
    {
        if (x >= i)
        {
            v1.push_back(i);
            tt(x - i);
            v1.pop_back();
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
        cout << v.size() << "\n";
        for (vector<int>& i : v)
        {
            cout << "(";
            for (int j = 0; j < i.size(); ++j)
            {
                cout << i[j];
                if (j < i.size() - 1) cout << " ";
            }
            cout << ") ";
        }
        cout << "\n";
        v.clear();
        v1.clear();
    }
}
