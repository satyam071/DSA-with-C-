// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

 

// Example 1:

// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
// Example 2:

// Input: n = 7
// Output: 0
// Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
// Example 3:

// Input: n = 10
// Output: 5
// Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int inpt,i=0,binarydigit=0,count=0;
    int a[10];
    cout<<"Enter any number";
    cin>>inpt2;
    while(inpt2!=0){
       // int binarydigit=inpt%2;
       // cout<<"Array is:"<<a;
        a[i]=inpt%2;
        cout<<a[i]<<" --------------"<<endl;
        
        i++;


        

        //cout<<binarydigit;
        //binarynum=(binarynum*10)+binarydigit;
        //binarynum=binarydigit;
        inpt=inpt/2;
        count++;


    }
    // cout<<a[0]<<endl;
    // cout<<a[1]<<endl;
    // cout<<a[2]<<endl;
    // cout<<a[3]<<endl;
    // cout<<a[4]<<endl;
    // cout<<a[5]<<endl;
    int m=0;
    cout<<count<<" ccccccccc"<<endl;
    int looptime=0;
    for(int j=count-1;j>=0;j--){
        
        a[j]= !a[j] ;
        cout<<a[j];

        // cout<<"For the bit:"<<a[j]<<endl;
        // binarydigit=(a[j]* pow(2,k))+binarydigit;
        // cout<<"Binary count is:"<<binarydigit<<endl;
        looptime++;
       
    }
    int time=count;
    count++;
    int k=0;
    cout<<"Looptime: "<<looptime<<endl;
    
    while(looptime){
        

        cout<<"--------"<<k<<"--"<<a[k]<<"------"<<endl;
        binarydigit=(a[k]* pow(2,k))+binarydigit;
        k++;
        looptime--;
        //time--;
        count--;
    }
    cout<<binarydigit;
    

}