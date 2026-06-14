#include<iostream>
using namespace std;
void reachhome(int src,int dest){
    cout<<endl<<"The source is: "<<src<<" The dest. is: "<<dest;
    if(src==dest){
        cout<<"Pohoch gye";
        return;
    }
    src++;
    reachhome(src,dest);
}
int main(){
    int src=1;
    int dest=10;
    reachhome(src,dest);
}