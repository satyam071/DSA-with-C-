#include<iostream>
using namespace std;
int findPow(int a,int b){
    if(b==0){
        return 1;
    }
    return a * findPow(a,b-1);

}
int main(){
    int a,b;
    cout<<"Enter num a and b:";
    cin>>a>>b;
    int ans=findPow(a,b);
    cout<<ans<<endl;
}