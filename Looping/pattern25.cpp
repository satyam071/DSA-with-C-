#include<iostream>
using namespace std;
int main(){
    int row=0,n;
    cout<<"Enter the value of n:";
    cin>>n;
    int digit=1;
    while(row<n){
        int space=n-row-1;
        
        while(space){
            cout<<" "<<" ";
            //cout<<space;
            space--;
        }
        int col=row+1;
        while(col){
            cout<<digit<<" ";
            col--;
        }
        digit++;
        row++;
        cout<<endl;
    }
    
    
}