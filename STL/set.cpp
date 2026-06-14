#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(6);
    s.insert(5);
    s.insert(3);

    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<"One item is poped";
    s.erase(s.begin());
    for(auto i:s){
        cout<<i<<endl;
    }

}