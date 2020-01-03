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

// CREATE INORDER
void InOrder(struct node* root)
{
    stack <struct node*> S;
    struct node* p = root;
    while(1)
    {
        while(p)
        {
            S.push(p);
            p = p->prev;
        }
        if(S.empty())
            break;
        p = S.top();
        S.pop();
        cout<<p->data;
        p = p->next;
    }
}
int main()
{
    struct node* root = create();
    InOrder(root);
}
