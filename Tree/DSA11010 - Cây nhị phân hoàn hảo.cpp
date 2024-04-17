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
    int d = 0;
    while (head)
    {
        ++d;
        head = head->l;
    }
    return d;
}
int kt(node* head, int h, int x)
{
    if (!head->l && !head->r) return x + 1 == h;
    if (!head->l || !head->r) return 0;
    //cout << x << " " << head->data << "\n";
    return kt(head->l, h, x + 1) && kt(head->r, h, x + 1);
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
        node* head = 0;
        while (n--)
        {
            int par, child;
            char dir;
            cin >> par >> child >> dir;
            if (!head) head = new node(par);
            tree(head, par, child, dir);
        }
        if (kt(head, tt(head), 0)) cout << "Yes\n";
        else cout << "No\n";
    }
}
