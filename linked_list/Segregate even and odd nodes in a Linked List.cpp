#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *create(Node *root,int val)
{
    Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;

    if(root == NULL)
    {
        root = temp;
    }
    else
    {
        Node *p = root;
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
    return root;
}
void Segregate_even_odd(Node *root)
{
    if(root==NULL)
    {
        return ;
    }
    Node *p = root;
    // Node *pp = root->next;
    while(p)
    {
        if(p->data%2==0)
        {
            cout<<p->data<<" ";
        }
        p=p->next;
    }
    p = root;
    while(p)
    {
        if(p->data%2!=0)
        {
            cout<<p->data<<" ";
        }
        p=p->next;
    }
}
int main() {
    int test;
    cin>>test;
    while(test--)
    {
        Node *root = NULL;
        int size;
        cin>>size;
        for(int i=0;i<size;i++)
        {
            int val;
            cin>>val;
            root = create(root,val);
        }
        Segregate_even_odd(root);
        cout<<endl;
    }
	return 0;
}