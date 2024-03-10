#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
void tt(int x)
{
    for (int i = 0; i <= 1; ++i)
    {
        v.push_back(i);
        if (x == (n >> 1) + (n & 1))
        {
            vector<int> v1 = v;
            if (n & 1) v1.pop_back();
            reverse(v1.begin(), v1.end());
            for (int& j : v) cout << j << " ";
            for (int& j : v1) cout << j << " ";
            cout << "\n";
        }
        else tt(x + 1);
        v.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        cin >> n;
        tt(1);
    }
}
