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
        int n, k;
        cin >> n >> k;
        int a[n + 2];
        for (int i = 1; i <= n; ++i) cin >> a[i];
        deque<int> dq;
        for (int i = 1; i <= n; ++i)
        {
            while (dq.size() && a[i] >= a[dq.back()]) dq.pop_back();
            dq.push_back(i);
            if (i - k + 1 > dq.front()) dq.pop_front();
            if (i >= k) cout << a[dq.front()] << " ";
        }
        cout << "\n";
    }
}
