Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    int c=0;
    Node *temp=head;
    if(head==NULL){
        return head;
    }
    if(pos==0){
        head=temp->next;
        delete(temp);
        return head;
    }
    while(temp->next!=NULL && c<pos-1){
        temp=temp->next;
        c++;
    }
    if(temp->next!=NULL){
        Node *a=temp->next;
        temp->next=temp->next->next;
        delete a;
        
    }
    return head;
}
