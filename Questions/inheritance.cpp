//#include<iostream>
//using namespace std;
//class A
//{
//    int a,b;
//public:
//    A()
//    {
//        a=10;
//        cout<<a;
//    }
//};
//class B:public A
//{
//    public:
//};
//class C:public B
//{
//    public:
//};
//int main(){
//    C obj;
//    return 0;
//}
#include<iostream>
using namespace std;
class A
{
    public:
    int a;

    A()
    {
        a=10;

    }
};
class B:public virtual A
{

};
class C:public virtual A
{

};
class D:public B,public C
{

};
int main(){
    D object;
    cout<<"a="<<object.a;
    return 0;
}

