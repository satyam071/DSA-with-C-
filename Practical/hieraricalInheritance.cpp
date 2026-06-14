#include<iostream>
using namespace std;
class parent{
    public:
        void display(){
            cout<<"This is the parent class";
        }
};
class child1:public parent{
    public:
        void show1(){
            cout<<"This is the child 1";
        }
};
class child2:public parent{
    public:
        void show2(){
            cout<<"This is the child 2";
        }
};
int main(){
    child1 obj1;
    child2 obj2;
    obj1.display();
    obj1.show1();
    obj2.display();
    obj2.show2();
    
}

