#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(9);
    s.push(10);
    s.pop();
    cout<<"Working "<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty";
    }
    else{
        cout<<"stack is not empty";
    }
    cout<<endl<<"size "<<s.size();
    return 0;
}
