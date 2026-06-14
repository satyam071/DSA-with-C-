//First in first out
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("First");
    q.push("in");
    q.push("out");

    cout<<"First element is:"<<q.front()<<endl;
    q.pop();
    cout<<"Now the first element is :"<<q.front();
}
