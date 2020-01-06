//REFER for any doubt : https://www.youtube.com/watch?v=rukYFD8cYBY&list=PLeIMaH7i8JDj7DnmO7lll97P1yZjMCpgY&index=3
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
// FINDING INOREDER_PREDECESSOR
void inorder_predecessor(int val)
{
    struct node* node1 = find_node(val);
    // cout<<node->data;
    if(node1->left != NULL)
    {   
        struct node *tmp = node1->left;
        while(tmp->right != NULL)
        {
            tmp = tmp->right;
            cout<<tmp->data;
        }
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
    inorder_predecessor(pre_val);
}
