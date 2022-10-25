int helper(Node *head,int n,int i){
    if(head==NULL){
        return -1;
    }
    
    //cal
    if(head->data==n){
        return i;
    }
    
    //call
    return helper(head->next,n,i+1);
    
}
int findNodeRec(Node *head, int n)
{
	//Write your code here
    if(head==NULL){
        return -1;
    }
    if(head->next==NULL){
        if(head->data==n){
            return 0;
        }
    }
    int i=0;
    int ans=helper(head,n,i);
    return ans;
}