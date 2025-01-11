//To covert the given number into binanery number
//where we can use two formulas for that
//for same flow of number we shall use the formula 
//ans=(ans x 10)+ digit 
//for reverse flow of number we shall use the formula 
//ans=(digit x 10^i)+ans
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value for n:";
    cin>>n;

    int ans=0;
    int i=0;
    while(n!=0){
        int bit = n % 2;
        ans= (bit * pow (10,i))+ ans;
        n=n/2;
        i++;

        
    }
    cout<<"The answer is:"<<ans<<endl;
    

}