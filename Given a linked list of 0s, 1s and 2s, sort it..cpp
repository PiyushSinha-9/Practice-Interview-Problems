
// USE this when we can make changes in the array or linkedin list
// SEE the use of 2nd while loop  HINT -> [0,0,7]


Node* segregate(Node *head) {
    
    // Add code here
    int values[]= {0,0,0};
    
    Node *temp=head;
    while(temp!=NULL){
        values[temp->data]+=1;
        temp=temp->next;
    }
    
    temp=head;
    int ind=0;
    while(temp!=NULL){
        while(values[ind]==0){
            ind+=1;
        }
        
        temp->data=ind;
        values[ind]-=1;
        temp=temp->next;
    }    
    
    
    return head;
    
}
