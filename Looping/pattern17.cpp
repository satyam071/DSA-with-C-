//A
//B C
//D E F
//G H I J 
#include<iostream>
using namespace std;
int main(){
    int n,i=0,count=0;
    cout<<"Enter the value of n:";
    cin>>n;
    while(i<n){
        
        int j=0;
        while(j<=i){
            char ch2='A' + count;
            cout<<ch2;
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}