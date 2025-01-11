//123
//456
//789
#include<iostream>
using namespace std;
int main(){
    int n,i=0;
    cout<<"Enter the value of n:";
    cin>>n;
    int k=1;
    while(i<n){
        
        int j=0;
        while(j<n){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}