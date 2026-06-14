#include<iostream>
using namespace std;
class over{
    public:
    int a;
    int b;
    void operator+(int &a){
        cout<<"This code is running sucessfully"<<this->a + obj.a;
    }
};
int main(){
    over obj1,obj2;
    obj1.a=6;
    obj2.a=7;
    obj1 + obj2;


}