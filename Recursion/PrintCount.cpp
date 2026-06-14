#include<iostream>
using namespace std;
int printcount(int n){
    if (n==0)
    {
        return 1;
    }
    

    cout<<n<<" ";
    printcount(n-1);


}
int main(){
    int n;
    cin>>n;
    printcount(n);
}