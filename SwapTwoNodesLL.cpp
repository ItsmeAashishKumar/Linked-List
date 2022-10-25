Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    //if bith equal
    if(i==j){
        return head;
    }
    

    Node *t1=head;
    Node *t2=head;
    //if i is 0
    if(i==0){
        t1=head;
    }
    
    else{
        int c=0;
        while(t1!=NULL && c<i-1){
            t1=t1->next;
            c++;
        }
        
        if(t1==NULL){
            return head;
        }
        
    }
    
    //for j
    int x=0;
    while(t2!=NULL && x<j-1){
        t2=t2->next;
        x++;
    }
    if(t2==NULL){
        return head;
    }
    
    
    //connections
    Node *p=t2->next;
    Node *q=t1->next;
    Node *temp=t2->next->next;
    t1->next=p;
    t1->next->next=q;
    q->next=temp;
    
    
    if(i==0){
        return p;
    }
    else{
        return head;
    }
    
    
}