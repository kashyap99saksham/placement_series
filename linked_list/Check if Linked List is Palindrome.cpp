//USING STACK
bool isPalindrome(Node *head)
{
    stack <int> s;
    Node *p = head;
    while(p!=NULL)
    {
        s.push(p->data);
        p=p->next;
    }
    while(head!=NULL)
    {
        int top_stack = s.top();
        if(top_stack!=head->data)
            return false;
        head = head->next;
        s.pop();
    }
    return true;
}


//WE CAN DO WITH REVERSE HALF PART AND CHECK BOTH PART IS IDENTICAL OR NOT
