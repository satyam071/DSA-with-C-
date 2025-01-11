#include<iostream>
using namespace std;
int main(){
    int count=1;
    int num1,num2;
    cin>>num1;
    cin>>num2;
    while(num1==0 || num2==0){
        if(num1==num2){
            num2=num1-num2;
            cout<<num2;
            count=count+1;
        }
        else if (num1>num2){
            num1=num1-num2;
            cout<<num1;
            count=count+1;
        }
        else if (num2>num1){
            num2=num2-num1;
            cout<<num2;
            count=count+1;
        }
        count=count+1;

    }
    cout<<"Number of operations: " <<count<<endl;
    return count;
}