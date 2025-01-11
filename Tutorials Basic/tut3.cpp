//Finding the maximum numbers among the three numbers 
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if(num1>num2){
        if (num1>num3)
        {
            cout<<num1<<"Is the largest number";
        }
    }
    else if(num3>num2){
        if(num3>num1){
            cout<<num3<<"Is the largest number";
        }


    }
    else{
        cout<<num2<<"is the largest number";
    }
        
        
    

}