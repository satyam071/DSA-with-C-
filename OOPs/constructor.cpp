#include<iostream>
using namespace std;
class student{
    private:
    int marks;
    public:
    student(int marks){
        cout<<"Class is now running";
        this->marks=marks;
    }
    getMarks(){
        return marks;
    }
};
int main(){
    student satyam(5);
    cout<<endl<<endl<<endl;
    cout<<satyam.getMarks();
    cout<<endl<<endl<<endl;
}