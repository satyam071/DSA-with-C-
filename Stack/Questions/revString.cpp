#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="Satyam";
    stack<int> s;
    for(int i=0;i<str.size();i++){
        int value=str[i];
        s.push(value);
    }
    string ans=" ";
    while(s.size()!=0){
        ans.push_back(s.top());
        s.pop();

    }
    cout<<"The reversed string is:"<<ans;
}