#include<iostream>
using namespace std;
int main(){
    int row=0,n;
    cout<<"Enter the value of n:";
    cin>>n;
    int digit=1;
    while(row<n){
        int space=row;
        
        while(space){
            cout<<" "<<" ";
            space--;
        }
        int col=n-row;
        while(col){
            cout<<digit<<" ";
            col--;
        }
        digit++;
        row++;
        cout<<endl;
    }
    
    
}