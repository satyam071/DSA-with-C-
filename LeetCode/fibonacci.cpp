//Fibonacci series is the series where the sum of two preceding numbers is the next third number.
//0,1,1,2,3,5,8,13
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n; i++){
        int nextnumber=a+b;
        cout<<nextnumber<<" ";

        a=b;
        b=nextnumber;


    }
}