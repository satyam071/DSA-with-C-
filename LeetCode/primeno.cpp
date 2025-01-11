//check wheather the given number is prime or not 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want to check prime or not:";
    cin>>n;
    int count=0;
    for(int i=2;i<n;i++){
        if (n%i!=0){
            //cout<<"The given number is not divisible by "<<i<<endl;
            count++;
        
        }
        else if (n%i==0){
            break;
        }
    }
    if(count){
        cout<<"The given number is a prime number"<<endl;
    }
    else{
        cout<<"The given number is not a prime number";
    }
}