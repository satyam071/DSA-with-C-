//1
//21
//321 
//4321
#include<iostream>
using namespace std;
int main(){
    int n,i=1,count=1;
    cout<<"Enter the value of n:";
    cin>>n;
    while(i<=n){
        
        int j=0;
        while(j<i){
            cout<<i-j << " ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}