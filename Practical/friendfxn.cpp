#include<iostream>
using namespace std;
class mohan;
class ram{
    int money=10;
    friend void shyam(ram,mohan);

};
class mohan{
    int money=20;
    friend void shyam(ram,mohan);
};
void shyam(ram r1,mohan r2){
    cout<<"sum is"<<r1.money+r2.money;
}
int main(){
    ram obj1;
    mohan obj2;
    shyam(obj1,obj2);
}