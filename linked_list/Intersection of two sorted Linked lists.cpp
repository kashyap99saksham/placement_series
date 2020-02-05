// WE ARE MOVE BOTH POINTERS IF DATA PRESENT ... IF NOT THEN WE CHECK WHICH DATA IS SMALLER , MOVE THEN MODE 
void intersection(Node **head1, Node **head2,Node **head3)
{
    Node *p = *head1;
    Node *q = *head2;
    while(p!=NULL && q!=NULL)
    {
        if(p->val==q->val)
        {
            push(head3,p->val);
            p = p->next;
            q = q->next;
        }
        else if(p->val < q->val)
            p = p->next;
        else
            q = q->next;
    }
}