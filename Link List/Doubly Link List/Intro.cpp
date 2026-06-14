#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
//Traverse and print DOubley LInk LIst
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

};
//Get length
int getLength(Node* head){
    int len=0;
     Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
//Insertion at head
void insertHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
//Insert at tail
void insertTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
};
//Insert at any point
void insertAtPosition(Node* &head, Node* &tail,int position, int data){
    Node* temp=head;
    if(position==1){
        insertHead(head,data);
        return;
    }
    
    int count=1;
   
    while(count!=position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertTail(tail,data);
        return;
    }
     Node* nodeToInsert=new Node(data);
    temp->next->prev=nodeToInsert;
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
    
    
    
};
//Insert at any point
void deleteNode(Node* &head,Node* &tail,int position){
    if(position==1){
        //deletion of first node
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;

    }
    else{
        //dletion at random position
        int count=1;
        Node* curr=head;
        Node* prev=NULL;
        while(count!=position){
            prev=curr;
            curr=curr->next;
            count++;

        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        
        delete curr;
    }
};
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    cout<<getLength(head)<<endl;

    insertHead(head,7);
    print(head);
    insertTail(tail,8);
    print(head);
    insertAtPosition(head,tail,3,8000);
    print(head);
    deleteNode(head,tail,4);
        print(head);



}