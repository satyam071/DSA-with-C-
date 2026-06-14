/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    Node* getMid(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    Node* reverse(Node* head){
        Node* curr=head;
        Node* next=NULL;
        Node* prev=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
        }
        return prev;
    }
    bool isPalindrome(Node *head) {
        //  code here
        //step 1 find the middle 
        
        Node* middle=getMid(head);
        
        //step 2 Now reverse form mid+1 till end
        Node* temp=middle->next;
        middle->next=reverse(temp);
        
        //step 3
        Node* head1=head;
        Node* head2=middle->next;
        
        while(head2!=NULL){
            if(head1->data!=head2->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        //step 4 repeat the step 2 to make the original LL original
        temp=middle->next;
        middle->next=reverse(temp);
        
        return true;
        
        
        
        
        
    }
};