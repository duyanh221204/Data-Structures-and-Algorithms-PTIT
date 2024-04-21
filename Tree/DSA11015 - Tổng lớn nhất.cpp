#include<bits/stdc++.h>
using namespace std;
int d;
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
    //cout << d << "\n";
    if (!head) return 0;
    if (!head->l && !head->r) return head->data;
    int x = tt(head->l), y = tt(head->r);
    //cout << x << " " << y << " " << "\n";
    if (!head->l) return y + head->data;
    if (!head->r) return x + head->data;
    //cout << x << " " << y << " " << head->data << "\n";
    d = max(x + y + head->data, d);
    //cout << d << " " << head->data + max(x, y) << "\n";
    return head->data + max(x, y);
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
        d = -2e9;
        tt(head);
        cout << d << "\n";
    }
}
