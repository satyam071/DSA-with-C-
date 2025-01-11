#include<iostream>
using namespace std;
int main(){
    int money,inpt,leftmony;
    cout<<"Enter the Amount:"<<endl;
    cin>>money;
    cin>>inpt;
    switch (inpt){
        case 500:
            leftmony=money/500;
            cout<<leftmony;
            break;
        case 100:
            leftmony=leftmony/100;
            cout<<leftmony<<endl;
        case 20:
            leftmony=leftmony/20;
            cout<<leftmony<<endl;
        case 1:
            leftmony=leftmony/1;
            cout<<leftmony<<endl;
        default:
        cout<<"We're still learning that stuff...";
        break;

    }


}