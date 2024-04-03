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
int tim(node* head, int x)
{
    while (head)
    {
        if (head->data == x) return 1;
        head = head->next;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        node* head = 0;
        while (n--)
        {
            int x;
            cin >> x;
            if (!tim(head, x)) push_back(head, x);
        }
        while (head)
        {
            cout << head->data << " ";
            head = head->next;
        }
    }
}
