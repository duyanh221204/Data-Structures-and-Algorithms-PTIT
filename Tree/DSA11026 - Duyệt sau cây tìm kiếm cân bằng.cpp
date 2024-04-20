#include<bits/stdc++.h>
using namespace std;
int a[1000002];
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
void tree(node*& head, int l, int r)
{
    if (l <= r)
    {
        int mid = l + r >> 1;
        head = new node(a[mid]);
        tree(head->l, l, mid - 1);
        tree(head->r, mid + 1, r);
    }
}
void tt(node* head)
{
    if (head)
    {
        tt(head->l);
        tt(head->r);
        cout << head->data << " ";
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
        for (int i = 1; i <= n; ++i) cin >> a[i];
        sort(a + 1, a + n + 1);
        node* head = 0;
        tree(head, 1, n);
        tt(head);
        cout << "\n";
    }
}
