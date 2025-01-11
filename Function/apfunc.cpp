#include<iostream>
using namespace std;
int ap(int n){
    int ans=3*n+7;
    return ans;
}
int main(){
    int n;
    cout<<"Enter the nth value:";
    cin>>n;
    int ans=ap(n);
    cout<<"The AP of given nth term is:"<<ans;
}