//2)Relational Operators..........Relation btw two operatants 
//return bool value
//a)==
//b)!=
//c)>
//d)<
//e)>=
//f)<=
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n==10){
        cout<<"Number is equal to 10";
    }
    else if (n>10)
    {
        cout<<"Number is greater than 10";
    }
    else if (n<10)
    {
        cout<<"Number is less9 than 10";
    }
    else{
        cout<<"Error 404";
    }
   
}