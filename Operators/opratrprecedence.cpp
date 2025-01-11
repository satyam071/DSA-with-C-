//Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 

//Example 1:

//Input: n = 234
//Output: 15 
//Explanation: 
//Product of digits = 2 * 3 * 4 = 24 
//Sum of digits = 2 + 3 + 4 = 9 
//Result = 24 - 9 = 15
//Example 2:

//Input: n = 4421
//Output: 21
//Explanation: 
//Product of digits = 4 * 4 * 2 * 1 = 32 
//Sum of digits = 4 + 4 + 2 + 1 = 11 
//Result = 32 - 11 = 21

// #include<iostream>
// using namespace std;
// int countdigit(int n){
//     if (n==0){
//         return 1;
//     }
//     int count=0;
//     while(n!=0){
//         int digit=n/10;
//         ++count;
//     }
//     return count;
// }
// int productofdigit(int n){
//     int prod=1;
//     while(n!=0){
//         int a=n%10;
//         prod=a*prod;
//         n=n/10;
//     }
//     return prod;
// }
// int sumofdigit(int n){
//     int sum=0;
//     while(n!=0){
//         int a=n%10;
//         sum=a+sum;
//         n=n/10;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     //productofdigit(n);
//     int sub= productofdigit(n) - sumofdigit(n);
//     cout<<sub;


// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int prod=1,sum=0;
    while(n!=0){
        int digit=n%10;
        prod=digit*prod;
        sum=digit+sum;
        n=n/10;

    }
    int sub= prod-sum;
    cout<<sub;
}