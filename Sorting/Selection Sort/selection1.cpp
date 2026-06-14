//Basic
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={142,312,24,54,34};
    int min=arr[0];
    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}