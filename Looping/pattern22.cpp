#include<iostream>
using namespace std;
int main(){
   int n,row=0;
    cout<<"Enter the value of n:";
    cin>>n;
    
    while(row<n){
        int star=n-row;
        int col=0;
        while(col<star){
            cout<<"*"<<" ";
            col++;

        }
        row++;
        cout<<endl; 
        
    }

}
    