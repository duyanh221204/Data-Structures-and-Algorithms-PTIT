#include<bits/stdc++.h>
using namespace std;
int s;
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
int kt(node* head)
{
    return !head->l && !head->r;
}
void tt(node* head)
{
    if (!head) return;
    if (head->r && kt(head->r)) s += head->r->data;
    if (head->l && !kt(head->l)) tt(head->l);
    if (head->r && !kt(head->r)) tt(head->r);
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
        unordered_map<int, node*> mp;
        while (n--)
        {
            int par, child;
            char dir;
            cin >> par >> child >> dir;
            if (!head) mp[par] = head = new node(par);
            if (dir == 76) mp[child] = mp[par]->l = new node(child);
            else mp[child] = mp[par]->r = new node(child);
        }
        tt(head);
        cout << s << "\n";
        s = 0;
    }
}
