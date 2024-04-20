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
void tree(node*& head, int x)
{
    if (!head) head = new node(x);
    else
    {
        if (x < head->data) tree(head->l, x);
        else tree(head->r, x);
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
        int n;
        cin >> n;
        node* head = 0;
        while (n--)
        {
            int x;
            cin >> x;
            tree(head, x);
        }
        cout << tt(head) - 1 << "\n";
    }
}
