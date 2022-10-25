Node *reverseLinkedList(Node *head) {
    // Write your code hereNode 
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *p=NULL;
    Node *c=head;
    Node *n=head->next;
    while(c!=NULL){
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL){
            n=n->next;
        }
    }
    return p;
}