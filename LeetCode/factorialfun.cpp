#include<iostream>
using namespace std;
int factorial(int num){
    int ans=1;
    while(num!=0){
        ans=ans*num;
        num--;

    }
    return ans;
}
int main(){
    int n,r,num;
    cout<<"Enter the value of n and r:";
    cin>>n>>r;
    //cout<<factorial(num);
    int denominator=factorial(r)*factorial((n-r));
    int ncr= factorial(n)/denominator;
    cout<<endl<<"The value of nCr is:"<<ncr;
}