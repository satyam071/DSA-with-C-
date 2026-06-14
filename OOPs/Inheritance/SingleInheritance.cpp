#include<iostream>
using namespace std;
//single inheritance
class human{
    public:
    int age;
    string name;
    void intro(){
        cout<<"I am a human, not a robot";
    }

};
class male:public human{
    
};
int main(){
    male m1;
    m1.intro();
}
