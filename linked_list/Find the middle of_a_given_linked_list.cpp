/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    int c=0;
    if(head==NULL)
        return -1;
    Node *p = head;
    while(p!=NULL)
    {
        p=p->next;
        c++;
    }
    c = c/2;
    while(c--)
        head = head->next;
    return head->data;

}
/*
Input:
2
5
1 2 3 4 5
6
2 4 6 7 5 1

Output:
3
7
*/
