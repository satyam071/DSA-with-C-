#include<iostream>
using namespace std;
int fabonaccifun(int n){
    cout<<"Fabonacci Series is:";
    int prev=0,j=1,k=1,nextt,i=0;
    cout<<"Fabonacci series is:"<<i<<" "<<j<<" ";

    for(int m=0;m<n;m++){
        
        nextt=i+j;
        cout<<nextt<<" ";
        i=j;
        j=nextt;
      //  cout<<endl<<"Val of i and J"<<i<<j<<endl;

    }
    
}
int main(){
    int a;
    cout<<"Enter the range of fabinacci series:";
    cin>>a;
    fabonaccifun(a);

}