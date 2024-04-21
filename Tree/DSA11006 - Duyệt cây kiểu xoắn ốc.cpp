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
        stack<node*> st1, st2;
        st1.push(head);
        while (st1.size() || st2.size())
        {
            while (st1.size())
            {
                node* m = st1.top();
                st1.pop();
                cout << m->data << " ";
                if (m->r) st2.push(m->r);
                if (m->l) st2.push(m->l);
            }
            while (st2.size())
            {
                node* m = st2.top();
                st2.pop();
                cout << m->data << " ";
                if (m->l) st1.push(m->l);
                if (m->r) st1.push(m->r);
            }
        }
        cout << "\n";
    }
}
