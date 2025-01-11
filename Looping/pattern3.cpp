//1234
//1234
//1234
//1234
#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"Enter the value of n:";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}