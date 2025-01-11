//      *
//    * *
//  * * *
//* * * *
#include<iostream>
using namespace std;
int main(){
    int n,row=0;
    cout<<"Enter the value of n:";
    cin>>n;
    while(row<n){
        int space=n-row;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        int col=0;
        while(col<=row){
            cout<<"*"<<" ";
            col++;
        }
        row++;
        cout<<endl;
        
    }
}