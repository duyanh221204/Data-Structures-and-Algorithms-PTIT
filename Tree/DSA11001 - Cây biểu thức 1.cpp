#include<bits/stdc++.h>
using namespace std;
struct node
{
    char data;
    node* l, *r;
    node (char data)
    {
        this->data = data;
        this->l = this->r = 0;
    }
};
void tt(node* head)
{
    if (head)
    {
        tt(head->l);
        cout << head->data;
        tt(head->r);
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
        string s;
        cin >> s;
        node* head = 0;
        stack<node*> st;
        for (char& i : s)
        {
            if (isalpha(i)) st.push(new node(i));
            else
            {
                head = new node(i);
                head->r = st.top();
                st.pop();
                head->l = st.top();
                st.pop();
                st.push(head);
            }
        }
        tt(st.top());
        cout << "\n";
    }
}
