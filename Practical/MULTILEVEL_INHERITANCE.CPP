#include<iostream>
using namespace std;
class grandparent{
    public:
        void display(){
            cout<<"This is a grand parent class";
        }
};
class parent:public grandparent{
    public:
    void show(){
        cout<<"This is a parent class";
    }

};
class child:public parent{
    public:
    void print(){
        cout<<"This is a Child class";
    }

};
int main(){
    grandparent obj1;
    parent obj2;
    child obj3;
    obj1.display();
    obj2.show();
    obj3.print();
}