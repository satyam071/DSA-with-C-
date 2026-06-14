#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int height;
    void intro(){
        cout<<"I'am an animal";
    }
};
class dog:public Animal{

};
class lebra:public dog{

};
int main(){
    lebra l1;
    l1.intro();

}