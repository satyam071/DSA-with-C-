//Write sum of all even path
#include<iostream>
using namespace std;
int main(){
    int i=0,n,sum=0;
    cout<<"Enter the range you want to enter the number:";
    cin>>n;
    
    while(i<=n){
        if (i%2==0)
        {
            cout<<i;
            sum=sum+i;
            i++;
        }

        
        
    }
    cout<<sum;
}