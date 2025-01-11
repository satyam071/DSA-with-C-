//A B C
//D E F
//G H I
#include<iostream>
using namespace std;
int main(){
    int n,i=0;
    cout<<"Enter the value of n:";
    cin>>n;
    int count=0;
    
    while(i<n){
        
        int j=0;
        
        
        while(j<n){
            
            char ch= 'A' + count;

            cout<< ch  << " ";
            j++;
            count++;
        
        }
        cout<<endl;
        i++;
    }
}