#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int ans=0,i=0,bit=1;
    while(n!=0){
        int lastbit= n%10;
        ans=ans+(lastbit * pow(2,i));
        //bit= bit*pow(10,1)+ans;
        n=n/10;
        i++;

    }
    cout<<"The answer is:"<<ans<<endl;
}