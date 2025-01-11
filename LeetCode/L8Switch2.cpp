#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char oper;
    cout<<"Enter num 1:";
    cin>>num1;
    cout<<"Enter num 2:";
    cin>>num2;
    cout<<"Enter operation:";
    cin>>oper;
    switch( oper ) {
        case '+':cout<<num1+num2;
            break;
        case '-':cout<< num1-num2;
            break;
        case '*':cout<<num1*num2;
            break;
        case '/':cout<< num1/num2;
            break;
        case '%':cout<<num1%num2;
            break;
        default :cout<<"Invaild operator";

    }
    
}