#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int moveZeros(vector<int> &arr){
    int n=arr.size();
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[index]);
            index++;
        }
    }
}
int main(){
    vector<int> arr={1,2,0,4,3,0,5,0};
    moveZeros(arr);
    for(int num: arr){
        cout<<num<<" ";
    }
}