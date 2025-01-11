//        1
//      1 2 1
//    1 2 3 2 1 
//  1 2 3 4 3 2 1 
#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    cout<<"Enter the value of n:";
    cin>>n;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        
        int col=1;
        int num=1;
        while(col<=row){
            cout<<num<<" ";
            num++;
            col++;
        }
        int col1=1;
        int num1=row-1;
        while(col1<row){
            cout<<num1<<" ";
            col1++;
            num1--;
        
        }
        row++;
        cout<<endl;

    }
}