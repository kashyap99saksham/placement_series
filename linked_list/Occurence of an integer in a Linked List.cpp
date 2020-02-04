
int count(struct node* head, int search_for)
{
    if(head==NULL)
        return -1;
    int c=0;
    while(head!=NULL)
    {
        if(head->data==search_for)
        {
            c++;
        }
        head = head->next;
    }
    return c;
}

/*
Input:
1
8
1 2 2 4 5 6 7 8
2

Output:
2
*/
