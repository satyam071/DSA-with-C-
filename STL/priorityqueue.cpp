//Priority Queue
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> max;
    priority_queue<int,vector<int>,greater<int> > mini;
    max.push(1);
    max.push(3);
    max.push(10);
    max.push(0);
    int n=max.size();
    for(int i=0;i<n;i++){
        cout<<max.top()<<" ";
        max.pop();
    }cout<<endl;
    mini.push(1);
    mini.push(3);
    mini.push(10);
    mini.push(0);

    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
}