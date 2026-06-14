#include<iostream>
using namespace std;
class over{
    public:
    int a;
    int b;
    void operator+(){
        cout<<"This code is running sucessfully";
    }
    void operator()(){
        cout<<"Mai bracket hu"<<this->a;
    }
};
int main(){
    over obj1,obj2;
    obj1.a=5;
    +obj2;
    cout<<endl;
    obj1();


}