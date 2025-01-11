#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    cout<<"Enter the value of n:";
    cin>>n;
    int dig=1;
    while(row<=n){
        int space=n-row;
        
        while(space){
            cout<<" "<<" ";
            space--;
        }
        int col=1;
        while(col<=row){
            
            cout<<dig<<" ";
            dig++;
            col++;
        }
        row++;
        cout<<endl;
    }
    
    
}