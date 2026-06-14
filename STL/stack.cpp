#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    
    s.push("Last");
    s.push("in");
    s.push("First");
    s.push("Out");

    cout<<"The Top element is :"<<s.top();
    s.pop();
    cout<<"One item is being popped Now the top element is :"<<endl;
    cout<<s.top();
}