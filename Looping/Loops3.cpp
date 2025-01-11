//given number is prime or not 
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter any number:";
    int inpt,i=2,count=0;
    cin>>inpt;
    while(i<=inpt/2){
        if(inpt%i == 0){
            count=count+1;
            break;
            
        }
        i++;
    }
    if(count>0){
        cout<< "This is not a prime number";
    }
    else{
        cout<<"This is a prime number";
    }

}