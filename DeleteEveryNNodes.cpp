Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    if(M==0){
        return NULL;
    }
    
    if(N==0){
        return head;
    }
    
    
    Node *t1=head;
    Node *t2=head;
    while(t1!=NULL || t2!=NULL){
        int c=1;
        while(t1!=NULL && c<M){
            t1=t1->next;
            c++;
        }
        if(t1==NULL){
            return head;
        }
        t2=t1->next;
        
        int x=1;
        while(t2!=NULL && x<N){
            t2=t2->next;
            x++;
        }
        if(t2==NULL){
            t1->next=NULL;
            return head;
        }
        
        t1->next=t2->next;
        t1=t2->next;
    }
}