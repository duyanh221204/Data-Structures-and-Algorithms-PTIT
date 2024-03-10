#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1, dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2}, dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
    cin >> T;
    while (T--)
    {
        string st, en;
        cin >> st >> en;
        queue<pair<pair<int, int>, int>> q;
        int k[30][30] = {};
        q.push({{st[0] - 96, st[1] - 48}, 0});
        k[st[0] - 96][st[1] - 48] = 1;
        while (q.size())
        {
            pair<pair<int, int>, int> p = q.front();
            q.pop();
            if (p.first.first == en[0] - 96 && p.first.second == en[1] - 48)
            {
                cout << p.second << "\n";
                break;
            }
            for (int i = 0; i < 8; ++i)
            {
                int x = p.first.first + dx[i], y = p.first.second + dy[i];
                //cout << x << " " << y << "\n";
                if (x >= 1 && x <= 8 && y >= 1 && y <= 8 && !k[x][y])
                {
                    ++k[x][y];
                    q.push({{x, y}, p.second + 1});
                }
            }
        }
    }
}
