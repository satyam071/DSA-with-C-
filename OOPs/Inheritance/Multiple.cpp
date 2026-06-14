#include<iostream>
using namespace std;
class male{
    public:
    int age;
    void introm(){
        cout<<"I am a male!";
    }
};
class female{
    public:
    void introf(){
        cout<<"I'am a female";
    }
};
class genders:public male,public female{

};
int main(){
    genders g1;
    g1.introm();
    cout<<endl;
    g1.introf();

}