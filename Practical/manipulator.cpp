#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=5;
    cout<<setw(20)<<"Hello"<<endl;
    cout<<setprecision(4)<<12.239<<endl;
    cout<<setw(10)<<setprecision(4)<<12.239<<endl;
    cout<<"The value of a is "<<setw(7)<<setfill('*')<<a;
    return 0;



}
