// USING INORDER BINARY TREE TO CIRCULAR LINKED LIST
//REFER FROM GEEKSFORGEEKS AND VIVEKANAND
void bToDLL(Node *root, Node **head_ref)
{

    if(root==NULL)return;
    static Node* prev=NULL;
    
    bToDLL(root->left,head_ref);
    
    if(*head_ref==NULL)
    {
          prev=NULL; /* Same copy of static variable in all test cases is not desired.*/
        *head_ref=root;
    }
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    
    bToDLL(root->right,head_ref);

}


