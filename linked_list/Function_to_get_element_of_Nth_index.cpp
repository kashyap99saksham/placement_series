// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
    if(head==NULL)
        return 0;
    while(index--)
    {
        head = head->next;
    }
    return head->data;
}
