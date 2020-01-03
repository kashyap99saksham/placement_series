#include<bits/stdc++.h>
#include<stack>
using namespace std;

//CREATE TREE
struct node{
    int data;
    struct node *next,*prev;
};
struct node* create()
{
    int x;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    cout<<" Enter The Value (-1 for end) ";
    cin>>x;
    if(x == -1)
        return NULL;
    temp->data = x;
    cout<<"Enter Left Child of "<<x;
    temp->prev = create();
    cout<<"Enter Right Child of "<<x;
    temp->next = create();
    return temp;    
}

// CREATE PREORDER
void PreOrder(struct node* root)
{
    stack <struct node*> S;
    struct node* p = root;
    while(1)
    {
        while(p)
        {
            cout<<p->data;
            S.push(p);
            p = p->prev;
        }
        if(S.empty())
            break;
        p = S.top();
        S.pop();
        p = p->next;
    }
}
int main()
{
    struct node* root = create();
    InOrder(root);
}
