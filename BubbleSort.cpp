#include<bits/stdc++.h>

int f(Node *head){
    int c=1;
    Node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    return c;
}

Node *bubbleSort(Node *head)
{
	// Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    int l=f(head);
    for(int i=0;i<(l-1)-1;i++){
		Node *temp=head;
        for(int j=0;j<(l-i-1)-1;j++){
            if(temp->data>temp->next->data){
                swap(temp->data,temp->next->data);
            }
            temp=temp->next;
        }
    }
    return head;
}