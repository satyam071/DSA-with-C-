//A
//B B
//C C C
//D D D D
#include<iostream>
using namespace std;
int main(){
    int n,i=0,count=1;
    cout<<"Enter the value of n:";
    cin>>n;
    while(i<n){
        
        int j=0;
        while(j<=i){
            char ch2='A' + i;
            cout<<ch2;
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}