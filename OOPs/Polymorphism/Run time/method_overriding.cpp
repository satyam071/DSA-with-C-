#include<iostream>
using namespace std;
class animal{
    public:
    void speak(){
        cout<<"speaking";
    }
};
class dog:public animal{
    // public:
    // void speak(){
    //     cout<<"barking";
    // }
};
int main(){
    dog obj1;
    obj1.speak();

}