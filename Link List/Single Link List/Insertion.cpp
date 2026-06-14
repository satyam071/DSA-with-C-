#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};
//Insertion at tail in linked list
void insertionAtTail(Node* &tail, int data){
    Node*temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}
//Insertion at Head in Link List
void InsertionAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

//Insertion at middle
void InsertionAtMiddle(Node* &head,Node* &tail,int position,int data){
    //Inserting at head
    if(position==1){
        InsertionAtHead(head,data);
        return;
    }
    Node* temp=head;
    int count=1;
    while(count < position-1){
        temp=temp->next;
        count++;
    }
    //Inserting at tail
    if(temp->next==NULL){
        insertionAtTail(tail,data);
        return;
    }
    Node* nodeToInsert=new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

};
//Traverse
void print(Node* &head){
    Node* temp= head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
};
//Deleting the node
void deleteNode(Node* &head,int position){
    //Deleting the first node
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int count=1;
        while(count!=position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
};
int main(){
    Node* node1=new Node(10);
    //cout<<node1 ->data<<endl;
   // cout<<node1 ->next<<endl;
   Node* head=node1;
   Node* tail=node1;
//    print(head);
   insertionAtTail(tail,13);
   insertionAtTail(tail,15);
   insertionAtTail(tail,17);
   insertionAtTail(tail,90);
//    print (head);
   insertionAtTail(tail,15);
   InsertionAtMiddle(head,tail,7,100);
   print(head);
  
   cout<<"This is Head: "<<head->data <<endl;
   cout<<"This is Tail: "<<tail->data;
    cout<<endl;
   deleteNode(head,7);
   print(head);
    
    
}