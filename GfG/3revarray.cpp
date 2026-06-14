#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <int> arr={37,83,487,286,847,927};
    int n=arr.size();
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-(i+1)]);
        
    }
    for(int num: arr){
        cout<<num<<" ";
    }


}