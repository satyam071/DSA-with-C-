#include<iostream>
using namespace std;
class a{
    public:
    void funct1(){
        cout<<"This is function 1";
    }
};
class d{
    public:
    void funct2(){
        cout<<"This is function 2";
    }
};
class b:public a{
    public:
    void funct3(){
        cout<<"This is function 3 inherited from a";
    }
};
class c:public a,public d{
    public:
    void funct4(){
        cout<<"This is function 4 inherited from a and d";
    }
};
int main(){
    a obj1;
    obj1.funct1();
    cout<<endl;
    
    b obj2;
    obj2.funct3();
    cout<<endl;

    
    c obj3;
    obj3.funct4();
    cout<<endl;

    
    d obj4;
    obj4.funct2();
    cout<<endl;

}