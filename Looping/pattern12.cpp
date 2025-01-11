//A
//B C
//D E F
#include<iostream>
using namespace std;
int main(){
    int row=1, n,count=0;
    cout<<"Enter the value of n:";
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+ count;
            cout<<ch;
            count++;
            col++;

        }
        cout<<endl;
        row++;

    }
}