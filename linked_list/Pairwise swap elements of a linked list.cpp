// MORE TIME COMPLEXITY DUE TO TWO POINTERS
Node* pairWiseSwap(struct Node* head)
{
   Node *p = head; 
   Node *q = head->next;
   while(p && q)
   {
       int temp = p->data;
        p->data = q->data;
        q->data = temp;
        p->next = q->next;
        q->next = p->next;
   }
   return head;
}   

// LESS TIME COMPLEXITY AS WE ARE USING SINGLE POINTER
Node* pairWiseSwap(struct Node* head)
{
   Node *temp = head; 
   while(temp && temp->next)
   {
       swap(temp->data,temp->next->data);
       temp = temp->next->next;
   }
   return head;
}