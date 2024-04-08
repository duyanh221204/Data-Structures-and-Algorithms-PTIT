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
void tt(node* head)
{
    queue<node*> q;
    q.push(head);
    while (q.size())
    {
        node* n = q.front();
        q.pop();
        cout << n->data << " ";
        if (n->l) q.push(n->l);
        if (n->r) q.push(n->r);
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
        node* head = 0;
        while (n--)
        {
            int par, child;
            char dir;
            cin >> par >> child >> dir;
            if (!head) head = new node(par);
            tree(head, par, child, dir);
        }
        tt(head);
        cout << "\n";
    }
}
