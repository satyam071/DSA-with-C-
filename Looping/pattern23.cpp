//* * * *
//  * * * 
//    * * 
//      *

#include<iostream>
using namespace std;
int main(){
   int row=0,n;
   cout<<"Enter the value of n:";
   cin>>n;
   while(row<n){
    //int space=n-row;
        int space=row;
        while(space){
            cout<<" "<<" ";
            space--;
        }
        int col=0;
        int star=n-row;
        while(star){
            cout<<"*"<<" ";
            //col++;
            star--;


        }
        row++;
        cout<<endl;
   }


}
  