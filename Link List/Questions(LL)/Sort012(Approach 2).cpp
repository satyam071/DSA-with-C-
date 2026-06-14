void insertAtTail(Node* &tail, Node* curr){
    tail->next=curr;
    tail=curr;
}
Node* sortList(Node *head){
   // Write your code here.
    Node* zeroHead= new Node(-1);
    Node* zeroTail=zeroHead;
    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;
    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;

    Node* curr=head;

    //Filling the dummy nodes with 0s 1s and 2s 
    while(curr!=NULL){
        int value=curr->data;
        if(value==0){
            insertAtTail(zeroTail,curr);
        }
        else if(value==1){
            insertAtTail(oneTail,curr);
        }
        else if(value==2){
            insertAtTail(twoTail,curr);
        }
        curr=curr->next;
    }

    //Now Merging all the three linked lists
    if(oneHead->next!=NULL){
        zeroTail->next=oneHead->next;
    }
    else{
        zeroTail->next=twoHead->next;
    }
    oneTail->next=twoHead->next;
    twoTail->next=NULL;

    //setup head
    head=zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
    
}