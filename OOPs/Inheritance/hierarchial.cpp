#include<iostream>
using namespace std;
class A{
    public:
    void func1(){
        cout<<"This is function 1";
    }
};
class b:public A{
    public:
    void func2(){
        cout<<"This is function2 ";
    }

};
class c: public A{
    public:
    void func3(){
        cout<<"This is function 3";

    }
};
int main(){
    A obj1;
    obj1.func1();
    cout<<endl;
    b obj2;
    obj2.func2();
    cout<<endl;
    c obj3;
    obj3.func3();

}