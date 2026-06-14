
class Solution {
  public:
    void insertAtTail(Node* &head, Node* &tail, int data ){
        Node* newNode= new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    Node* cloneLinkedList(Node* head) {
        // code here
        
        //Step 1 copying the node with next pointer
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        
        Node* temp=head;
        while(temp!=NULL){
            insertAtTail(cloneHead,cloneTail,temp->data);
            temp=temp->next;
        }
        
        //Step 2 mapping the OG node with new node
        
        Node* originalHead=head;
        Node* newHead=cloneHead;
        unordered_map<Node* , Node*>oldToNewNode;
        
        while(originalHead !=NULL && newHead !=NULL){
            oldToNewNode[originalHead]=newHead;
            originalHead=originalHead->next;
            newHead=newHead->next;
            
        }
        originalHead=head;
        newHead=cloneHead;
        
        //step 3 to write the formula for random
        
        while(originalHead !=NULL && newHead != NULL){
            newHead->random=oldToNewNode[originalHead->random];
            originalHead=originalHead->next;
            newHead=newHead->next;
        }
         return cloneHead;
        
    }
};