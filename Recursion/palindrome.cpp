#include<iostream>
using namespace std;
bool checkpalindrome(string p,int s,int e){
    if(s>e){
        return true;
    }
    if(p[s]!=p[e]){
        return false;

    }
    else{
        return checkpalindrome(p,s+1,e-1);

    }


}
int main(){
    string p="abba";
    bool rev=checkpalindrome(p,0,p.length()-1);
    if(rev){
        cout<<"The number is palindrome";

    }
    else{
        cout<<"The number is not a palindrome";
    }

}