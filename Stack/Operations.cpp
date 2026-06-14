#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int *arr;
    int top;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;

    }
    

    //push
    void push(int element){
        if(size-top>=0){//atleast 1 empty space is there
            top++;
            arr[top]=element;

        }
        else{
            cout<<"Stack is overflow"<<endl;
        }

    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is Underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is underflow"<<endl;
        }


    }
    bool isEmpty(){
        if(top>=0){
            return false;
        }
        else{
            return true;
        }
    }
};
int main(){
    Stack st(5);
    
    st.push(7);
    st.push(90);
    st.push(50);
    cout<<st.peek()<<endl;


}