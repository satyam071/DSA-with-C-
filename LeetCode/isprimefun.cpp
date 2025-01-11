#include<iostream>
using namespace std;
bool isPrime(int num){
    int count=0;
    for(int i=0;i<num;i++){
        if(num%i==0){
            return 0;
        }
    } 
    
    return 1;
    
}
int main(){
    int num;
    cout<<"Enter the number you wanna check is prime or not:";
    cin>>num;
    if(isPrime(num)){
        cout<<"This number is prime number";
    }
    else{
        cout<<"This number is not a prime number";
    }
}