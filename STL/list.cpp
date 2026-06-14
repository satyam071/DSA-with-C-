#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int> n(5,100); // n mai 5 baar 100 aa jaaega 
    l.push_back(3);
    l.push_front(4);

    for(int i:n){
        cout<<i<<" ";

    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After erase: ";
    for(int i:l){
        cout<<i<<" ";

    }

}