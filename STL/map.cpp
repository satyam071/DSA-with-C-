#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="Hello";
    m[2]="world";
    m[3]="this";
    m[4]="is satyam";
    m.insert({5,"enjoy!"});
    cout<<endl<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"findind 13--->"<<m.count(-13);
    m.erase(3);
    cout<<endl<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

}