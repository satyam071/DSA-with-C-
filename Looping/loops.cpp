//print the sum at n range
#include<iostream>
using namespace std;
int main(){
    int i=0,n,sum=0;
    cout<<"Enter the range you want to enter the number:";
    cin>>n;
    
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum;
}