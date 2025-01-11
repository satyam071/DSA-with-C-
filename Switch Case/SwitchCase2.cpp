#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"Select the function you wanna perform(+,-,*,/)";
    char fun;
    cin>>fun;
    switch (fun)
    {
    case '+':
        cout<<num1+num2;
        break;
    case '-':
        cout<<num1-num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    
    default:
        cout<<"We're still learning that stuff...";
        break;
    }
   
}