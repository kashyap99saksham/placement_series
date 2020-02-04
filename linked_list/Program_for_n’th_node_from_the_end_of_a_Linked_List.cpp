//Program for n’th node from the end of a Linked List

/* Should return data of n'th node from the end of linked list.
*  head: head of the linked list
*  n: nth node from end to find
*/
int getNthFromLast(Node *head, int n)
{
    Node *p = head;
    int c=0;
    while(p!=NULL)
    {
        p = p->next;
        c++;
    }
    int differ = c-n;
    if(differ<0)
        return -1;
    while(differ--)
    {
        head=head->next;
    }
    return head->data;
}

/*
Input:
2
9 2
1 2 3 4 5 6 7 8 9
4 5
10 5 100 5

Output:
8
-1
*/
