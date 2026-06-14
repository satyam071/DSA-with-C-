#include<iostream>
using namespace std;
class kQueue{
    public:
        int k;
        int n;
        int *front;
        int *rear;
        int *arr;
        int *next;
        int freespot;

    public:
        kQueue(int n,int k){
            this->n=n;
            this->k=k;
            front=new int[k];
            rear=new int[k];
            for(int i=0;i<k;i++){
                front[i]=-1;
                rear[i]=-1;
            }
            next=new int[n];
            for(int i=0;i<n;i++){
                next[i]=i+1;
            }
            next[n-1]=-1;
            arr=new int[n];
            freespot=0;
        }
    void enqueue(int data,int qn){
        //check for overflow
        if(freespot==-1){
            cout<<"Stack overflow";
            return;
        }
        //step 2: find first index
        int index=freespot;
        //step 3: update free spot
        freespot=next[index];
        //step 4: check for the first element 
        if(front[qn-1]==-1){
            front[qn-1]=index;//ab ye naya front ho gya queue ka

        }
        else{
            //linnk kr do eek queue ke iss element ko previous walo ke saath
            next[rear[qn-1]]=index;
        }
        //step 5: update next
        next[index]=-1;
        //step 6: update rear
        rear[qn-1]=index;
        //step 7: push the element
        arr[index]=data;
    }
    int dequeue(int qn){
        //check for underflow
        if(front[qn-1]==-1){
            cout<<"Queue is underflow";
            return -1;
        }
        int index=front[qn-1];//find the index to pop
        front[qn-1]=next[index];//fornt ko aage badhao
        //free slots ko manage kro
        next[index]=freespot;
        freespot=index;

        return arr[index];

    }
    
};
int main(){
    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15,1);
    q.enqueue(20, 2);
    q.enqueue(25,1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;

    cout << q.dequeue(1) << endl;

    return 0;
}