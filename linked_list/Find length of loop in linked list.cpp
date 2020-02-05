
int countNodes(struct Node *slow)  {  
    int res = 1;  
    struct Node *temp = slow;  
    while (temp->next != slow) {  
        res++;  
        temp = temp->next;  
    }  
    return res;  
}  

int countNodesinLoop(struct Node *head){
    Node *slow_p,*fast_p;
    slow_p = head; fast_p = head;
    while(slow_p && fast_p && fast_p->next){
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if(slow_p==fast_p)
            return countNodes(slow_p);
    }
    return 0;
}
