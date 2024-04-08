#include<bits/stdc++.h>
using namespace std;
int n;
string s[1000002];
struct node
{
    string data;
    node* l, *r;
    node (string data)
    {
        this->data = data;
        this->l = this->r = 0;
    }
};
node* tree(node*& head, int x)
{
    if (x <= n)
    {
        head = new node(s[x]);
        tree(head->l, x << 1);
        tree(head->r, (x << 1) + 1);
    }
    return head;
}
long long tt(node* head)
{
    if (!head) return 0;
    if (head->data != "*" && head->data != "/" && head->data != "+" && head->data != "-") return stoll(head->data);
    if (head->data == "*") return tt(head->l) * tt(head->r);
    if (head->data == "/") return tt(head->l) / tt(head->r);
    if (head->data == "+") return tt(head->l) + tt(head->r);
    return tt(head->l) - tt(head->r);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i) cin >> s[i];
        node* head = tree(head, 1);
        cout << tt(head) << "\n";
    }
}
