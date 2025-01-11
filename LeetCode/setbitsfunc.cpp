//Total Number of set bits
#include<iostream>
#include<cmath>
using namespace std;
int decimalintobinary(int a){
    int binarynum=0,ans;
    int i=0;
    while(a!=0){
        ans=a%2;
        binarynum= ans*pow(10,i)+binarynum;
        a=a/2;
        i++;
    }
    cout<<binarynum;


}
int countsetbits(){
    int a,b;

}
int main(){
    int a;
    cin>>a;
    decimalintobinary(a);


    int num1,num2;
    cout<<"Enter the two numbers:";
    cin>>num1>>num2;
}
// int ans=0;
//     int i=0;
//     while(n!=0){
//         int bit = n % 2;
//         ans= (bit * pow (10,i))+ ans;
//         n=n/2;
//         i++;

        
    