#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* l, *r;
    node (int data)
    {
        this->data = data;
        this->l = this->r = 0;
    }
};
void tree(node*& head, int par, int child, char dir)
{
    if (head)
    {
        if (head->data == par)
        {
            if (dir == 76) head->l = new node(child);
            else head->r = new node(child);
        }
        tree(head->l, par, child, dir);
        tree(head->r, par, child, dir);
    }
}
int tt(node* head)
{
    if (!head) return 0;
    return max(tt(head->l), tt(head->r)) + 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, h, d = 1;
        cin >> n;
        node* head = 0;
        while (n--)
        {
            int par, child;
            char dir;
            cin >> par >> child >> dir;
            if (!head) head = new node(par);
            tree(head, par, child, dir);
        }
        h = tt(head);
        queue<pair<node*, int>> q;
        q.push({head, 1});
        while (q.size())
        {
            pair<node*, int> p = q.front();
            q.pop();
            if (!p.first->l && !p.first->r && p.second < h)
            {
                d = 0;
                break;
            }
            if (p.first->l) q.push({p.first->l, p.second + 1});
            if (p.first->r) q.push({p.first->r, p.second + 1});
        }
        cout << d << "\n";
    }
}
