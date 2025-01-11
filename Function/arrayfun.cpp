#include<iostream>
using namespace std;
int printarray(int arr[],int size){
    for(int i=0; i < size ;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10]={1,2};
    int size=10;
    printarray(arr,size);
}