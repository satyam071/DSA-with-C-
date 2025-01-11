// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

 

// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: n = 3
// Output: false
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int inpt;
    bool result =true;
    cout<<"Enter the number:";
    cin>>inpt;
    for(int i=0; i<=30; i++){
        int ans= pow(2,i);
        if (ans==inpt){
            cout<<"This number is the power of 2";
            result=false;

        }

        
        


    }
    if(result==true){
        cout<<"This Number is not the power of 2";

    }
    ;
}