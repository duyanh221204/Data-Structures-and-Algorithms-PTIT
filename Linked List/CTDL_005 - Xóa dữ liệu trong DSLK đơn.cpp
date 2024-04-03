#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
    node (int data)
    {
        this->data = data;
        this->next = 0;
    }
};
void push_back(node*& head, int x)
{
    if (head)
    {
        node* n = head;
        while (n->next) n = n->next;
        n->next = new node(x);
    }
    else head = new node(x);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int n, x;
        cin >> n;
        node* head = 0;
        while (n--)
        {
            int y;
            cin >> y;
            push_back(head, y);
        }
        cin >> x;
        while (head)
        {
            if (head->data != x) cout << head->data << " ";
            head = head->next;
        }
    }
}
