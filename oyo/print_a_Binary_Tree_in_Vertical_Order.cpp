#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left = NULL;
    struct node* right = NULL;
};
struct node* build_tree(struct node* root,int val,queue <struct node* > &q)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root = temp;
    }
    else if(q.front()->left==NULL)
    {
        q.front()->left = temp;
    }
    else
    {
        q.front()->right=temp;
        q.pop();
    }
    q.push(temp);
    return root;
}
struct node* create_tree(int arr[],int size)
{
    struct node* root = NULL;
    queue <struct node*> q;
    for(int i=0;i<size;i++)
    {
        root = build_tree(root,arr[i],q);
    }
    return root;
}
void getVerticalOrder(node* root, int hd, map<int, vector<int>> &m) 
{ 
    // Base case 
    if (root == NULL) 
        return; 
  
    // Store current node in map 'm' 
    m[hd].push_back(root->data); 
  
    // Store nodes in left subtree 
    getVerticalOrder(root->left, hd-1, m); 
  
    // Store nodes in right subtree 
    getVerticalOrder(root->right, hd+1, m); 
} 
  
// The main function to print vertical order of a binary tree 
// with the given root 
void printVerticalOrder(node* root) 
{ 
    // Create a map and store vertical order in map using 
    // function getVerticalOrder() 
    map < int,vector<int> > m; 
    int hd = 0; 
    getVerticalOrder(root, hd,m); 
  
    // Traverse the map and print nodes at every horigontal 
    // distance (hd) 
    map< int,vector<int> > :: iterator it; 
    for (it=m.begin(); it!=m.end(); it++) 
    { 
        for (int i=0; i<it->second.size(); ++i) 
            cout << it->second[i] << " "; 
        cout << endl; 
    } 
} 
 
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 }; 
	int n = sizeof(arr) / sizeof(arr[0]);
    struct node* root = create_tree(arr,n);
    printVerticalOrder(root); 
}