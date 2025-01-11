//3)Logical operators,...........Connct multiple operators of condn
//a)&&-------------TT--True TF-F,FT-F,FF-F
//b)||-------------TT-True,TF-T,FT-T,FF-F
//c)!--------------!(T)=F
//T-1.......F-0
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to check";
    cin>>n;
    if (n%2==0 && n%3==0){
        cout<<"Number is divisible by both 3 and 2";

    }
    else if (n%2==0)
    {
        cout<<"Number is divisible by only 2";
    }
    else if (n%3==0){
        cout<<"Number is divisible by only 3";
    }
    

}