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
    char ch= 'A';
    while(i<n){
        
        int j=0;
        while(j<=i){
            char ch2=ch + i+j;
            cout<<ch2;
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}