#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>a;
    a.push_back(1);
    a.push_front(2);
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    cout<<"The value of a at place 1 is "<<a.at(0)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;

    cout<<"Empty or not :"<<a.empty()<<endl;
    cout<<"Before erase"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
    
    a.erase(a.begin(),a.end());
    cout<<"After erase"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
    

}