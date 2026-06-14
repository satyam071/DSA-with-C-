#include<iostream>
using namespace std;
class Human{
    public:
    int age;
    int height;
    int weight;

    public:
    int getAge(){
        cout<<this->age;
        
    }
    void setWeight(int w){
        this->weight=w;
    }

};
class male:public Human{
    public:
    string color;
    void sleep(){
        cout<<"male is sleeping";
    }

};
int main(){
    male m1;
    cout<<m1.age<<endl;
    cout<<m1.height<<endl;
    cout<<m1.weight<<endl;
    cout<<m1.color<<endl;



}