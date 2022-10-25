
Node *evenAfterOdd(Node *head)
{
	//write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    
    Node *et=new Node(0);
    Node *eh=et;
    
    Node *ot=new Node(0);
    Node *oh=ot;
    
    
    while(head!=NULL){
        if(head->data%2==0){
            et->next=head;
            et=head;
            head=head->next;
            et->next=NULL;
        }
        else{
            ot->next=head;
            ot=head;
            head=head->next;
            ot->next=NULL;
        }
       
    }
    ot->next=eh->next;
    return oh->next;
    
}