//A
//B C
//C D E
//D F G H
#include<iostream>
using namespace std;
int main(){
    int n,i=0,count=1;
    cout<<"Enter the value of n:";
    cin>>n;
    while(i<n){
        
        int j=0;
        while(j<=n){
            char ch2='A' + i+j;
            cout<<ch2;
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}