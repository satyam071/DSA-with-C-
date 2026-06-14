#include<iostream>
#include<array>
using namespace std;
int main(){
    //int basic[3]={1,2,3};
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"The First Element of the array is: "<<a.front()<<endl;
    cout<<"The Last Element of the array is: "<<a.back()<<endl;
    cout<<"The element at position 2 is "<<a.at(1)<<endl;
    cout<<"Is the given array is empty or not: "<<a.empty();
}