#include<iostream>
using namespace std;
int arrayinput(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int arraysum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int arr[size];
    arrayinput(arr,size);
    arraysum(arr,size);
}