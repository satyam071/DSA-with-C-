#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool rempart=isSorted(arr+1,size-1);
        return rempart;
    }
}
int main(){
    int arr[5]={54676,54677,54678,54679,54679};
    int ans=isSorted(arr,5);
    if(ans==1){
        cout<<"The array is sorted";
    }
    else{
        cout<<"The array is not sorted";
    }
    
}