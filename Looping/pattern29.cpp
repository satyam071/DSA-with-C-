//1 2 3 4 5 5 4 3 2 1 
//1 2 3 4 * * 4 3 2 1
//1 2 3 * * * * 3 2 1
//1 2 * * * * * * 2 1 
//1 * * * * * * * * 1
#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    cout<<"Enter the value of n:";
    cin>>n;
    while(row<=n){
        //First Loop
        int col1=n-row+1;
        int digit=1;
        while(col1){
            cout<<digit<<" ";
            digit++;
            col1--;


        }
        //Star 1
        int star=row-1;
        while(star){
            cout<<"*"<<" ";
            star--;
        }
        //Star 2
        int star2=row-1;
        while(star2){
            cout<<"*"<<" ";
            star2--;
        }
        //num last loop
        int digit1=n-row+1;
        while(digit1){
            cout<<digit1<<" ";
            digit1--;


        }
        cout<<endl;
        row++;
    }
}