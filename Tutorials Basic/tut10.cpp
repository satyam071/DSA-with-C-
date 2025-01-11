#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number you wanna check if prime or not:";
    int num;
    cin>>num;
    int check;
    for(check=2; check<num ; check++){
        if(num%check==0){
            cout<<"This number is not prime";
            break;
        }
        

    }
    if(check==num){
        cout<<"This Number is prime";

    }
    
}