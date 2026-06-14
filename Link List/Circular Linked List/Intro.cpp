#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;

    }

};
//INsertion of node
void insertNode(Node* &tail,int element,int value){
    //for insertion at first position 
    if (tail==NULL){
        Node* newNode=new Node(value);
        tail=newNode;
        newNode->next=tail;
    }
    else{
        //for non empty circular linked list
        Node* temp=tail;
        int count=1;
        while(temp->data!=element){
            temp=temp->next;
        }
        Node* newNode=new Node(value);
        newNode->next=temp->next;
        temp->next=newNode;

    }
};
//Traversal of node
void print(Node* tail){

    Node* temp=tail;
    if(tail==NULL){
        cout<<"List is empty";
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    
    cout<<endl;
}; 
//deletion of the node
void deleteNode(Node* &tail,int element){
    if(tail==NULL){
        cout<<"The Present curcular Linked List is empty "<<endl;
    }
    else{
        //assuming the Value present in the given linked list
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=element){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;
        if(curr==prev){
            tail=NULL;
        }
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }

}
int main(){
    Node* tail=NULL;
    insertNode(tail,5,3);
    insertNode(tail,3,30);
    insertNode(tail,30,300);
    insertNode(tail,300,3000);
    insertNode(tail,3000,30000);

    print(tail);
    deleteNode(tail,300);
    print(tail);
    deleteNode(tail,30);
    print(tail);
    deleteNode(tail,3);
    print(tail);

    deleteNode(tail,3000);
    print(tail);
    deleteNode(tail,30000);
    print(tail);
}