#include<iostream>
using namespace std;
bool oddeve(int num){
    if(num&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cout<<"Enter number 1:";
    cin>>num;
    if(oddeve(num)){
        cout<<"This number is even";
    }
    else{
        cout<<"This number is odd";
    }
}