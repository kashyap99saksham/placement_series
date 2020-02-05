// VERY GOOD APPROACH .... MAKE ALL ELEMENTS AS NEGATIVE OF 1ST LIST AND THEN TRAVERSE ANOTHER ONE AND CHECK IS THERE ANY ELEMENT IS NEGATIVE THEN MAKE AS POSITIVE ,RETURN IT 
int intersectPoint(Node* head1, Node* head2)
{
    while(head1 != NULL)
    {
        head1->data = -1*(head1 -> data);
        head1 = head1 -> next;
    }
    int ans = -1;
    while(head2 != NULL)
    {
        if(head2 -> data < 0)
        {
            ans = -1*(head2 -> data);
            break;
        }
        head2 = head2 -> next;
    }
    return ans;
}

// MORE COMPLEXITY : WE ARE MOVE FURTHER FOR EXTRA LENGTH OF BIG LIST THEN GO ONE BY ONE IF NODE IS SAME THEN RETURN THAT NODE


int intersectPoint(Node* head1, Node* head2)
{
    // Finding length of both list
    int l1 = 0;
    int l2 = 0;
    Node *p = head1;
    Node *q = head2;
    while(p!=NULL)
    {
        l1++;
        p = p->next;
    }
    while(q!=NULL)
    {
        l2++;
        q = q->next;
    }
    // Setting back from start both pointers
    p = head1;
    q = head2;
    // Calculating Difference between l1 and l2
    int dif = l1-l2;
    dif = dif > 0 ? dif : -dif;
    if(l1>l2)
    {
        while(dif--)
        {
            p = p->next;
        }
        while(p!=NULL && q!=NULL)
        {
            if(p->data == q->data)
                return p->data;
        }
        return -1;
    }
    else
    {
        while(dif--)
        {
            q = q->next;
        }
        while(p!=NULL && q!=NULL)
        {
            if(p->data == q->data)
                return p->data;
        }
        return -1;
    }
}
