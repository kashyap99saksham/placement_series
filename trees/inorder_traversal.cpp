// TIME COMPLEXITY = O(n)
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next,*prev;
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
void inorder(struct node *root)
{
    if(root==NULL)
        return;
    inorder(root->prev);
    cout<<root->data;
    inorder(root->next);
}
int main()
{
    struct node *root;
    root = create();
    inorder(root);
}
