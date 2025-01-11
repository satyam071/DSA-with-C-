//Operators
//1)Arithematic operators A)Binary   + - * / % (On two operants)
//B)Unary ++(incrimenter) --(Decrimenter)
#include<iostream>
using namespace std;
int main(){
    //pre and post incrimeter
    int i=1;
       //1 (now i=2 post incrimeted)
    i=i++ + ++i;
            //4(1+[2(post incimented)+1(pre incrimentd)])
    
    cout<<i<<endl;

    int a=1;
    int b=2;
    int c;
    //1+2+1+2+3+4=13
    c=a + b + a++ + b++ + ++a + ++b;

    cout<<a<<" "<<b<<" "<<c<<endl;


}