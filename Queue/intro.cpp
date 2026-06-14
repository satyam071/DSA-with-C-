#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(15);
    q.push(13);
    cout<<"Size of queue is:"<<q.size()<<endl;

    q.pop();
    cout<<"Size of queue is:"<<q.size()<<endl;

    cout<<"Front element is:"<<q.front()<<endl;

    if(q.empty()){
        cout<<"QUEUE is empty"<<endl;
    }
    else{
        cout<<"Not empty";
    }


}