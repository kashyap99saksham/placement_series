int detectloop(Node *head) {


    //USING HASHING: Traverse the list one by one and keep putting the node addresses in a Hash Table. At any point, if NULL is reached then return false and if next of current node points to any of the previously stored nodes in Hash then return true.
    // set<Node *> s; 
    // while (h != NULL) { 
    //     // If this node is already present 
    //     // in hashmap it means there is a cycle 
    //     // (Because you we encountering the 
    //     // node for the second time). 
    //     if (s.find(h) != s.end()) 
    //         return 1; 
  
    //     // If we are seeing the node for 
    //     // the first time, insert it in hash 
    //     s.insert(h); 
  
    //     h = h->next; 
    // } 
  
    // return 0; 
    
    
    //---------------------------IF COUNTER REACHES THE MAXIMUM LIMIT OF TOTAL NODES THEN IT MEANS THERE IS LOOP
        
    {
        int n=0;
        while(head->next!=NULL)
        {
            n++;
            if(n>300)
                return 1;
            head=head->next;
        }
        return 0;
    }
}
