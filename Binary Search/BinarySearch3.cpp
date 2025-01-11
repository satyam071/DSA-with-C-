#include<iostream>
using namespace std;
int peaknum(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;

    }
    return start;
}
int main(){
    int arr[6]={1,2,8,10,3,4};
    int size=6;
    cout<<"The peak element is: "<<peaknum(arr,size)<<endl;
}