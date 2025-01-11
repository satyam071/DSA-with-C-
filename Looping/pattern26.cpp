#include<iostream>
using namespace std;
int main(){
    int row=0,n;
    cout<<"Enter the value of n:";
    cin>>n;
    int dig=1;
    while(row<n){
        int space=row;
        
        while(space){
            cout<<" "<<" ";
            space--;
        }
        int col=n-row;
        int digit =row+1;
        while(col){
            
            cout<<digit<<" ";
            digit++;
            col--;
        }
        digit++;
        row++;
        cout<<endl;
    }
    
    
}