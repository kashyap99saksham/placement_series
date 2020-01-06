#include<bits/stdc++.h>
using namespace std;
// MAKING TREE STRUCTURE
struct node
{
    int data;
    struct node *left,*right;
};
struct node *root = NULL;
// CREATING TREE
struct node* create()
{
    int val;
    struct node *temp =(struct node*)malloc(sizeof(struct node*));
    cout<<"Enter the Value"<<endl;
    cin>>val;
    if(val==-1)
        return NULL;
    temp->data = val;
    cout<<"Enter Left Node of "<<val;
    temp->left = create();
    cout<<"Enter Right Node of "<<val;
    temp->right = create();
    return temp;
}
// FINDIND THE NODE AT GIVEN KEY
struct node* find_node(int val)
{
    struct node *p = root;
    if(p->data = val)
        return p;
    while(p->data != val)
    {
        if(val < p -> data)
            p = p->left;
        else
            p = p->right;
    }
    return p;
}
// FINDING INOREDER_SUCCESSOR
void inorder_successor(int val)
{
    struct node* node1 = find_node(val);
    if(node1->right != NULL)
    {
        struct node* p = node1->right;
        while(p->left != NULL)
        {
            p = p->left;
        }
        cout<<p->data;
    }
    else
    {
        struct node* p = root;
		while(p->data != node1->data)
		{
			if(node1->data > p->data)
			{
				struct node *store = p;
				p = p->right;
			}
			else
			{
				p = p->left;
			}
		}
		cout<<p->data;
    }
    
}
int main()
{
    int pre_val;
    root = create();
    cout<<"Enter the Value for Finding Predecessor : "<<endl;
    cin>>pre_val; 
    inorder_successor(pre_val);
}
