#include<iostream>
using namespace std;

class Human{
    public:
    void funct(){
        cout<<"This is function 1 running successfully";
    }
    void funct(int a){
        cout<<"This is function 2 running sucessfully"<<a;
    } 
};
int main(){
    Human obj1;
    obj1.funct();
    obj1.funct(2);

}