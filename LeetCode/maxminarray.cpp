#include<iostream>
using namespace std;
int maxinarr(int arr[],int size){
    int i=0;
    int max=arr[i];
    for(i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max in array is:"<< max <<endl;

}
int mininarr(int arr[],int size){
    int i=0;
    int min=arr[i];
    for(i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Min in array is:"<< min <<endl;

}
int arrayinput(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

}
int main(){
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[size];
    arrayinput(arr,size);
    int max= maxinarr(arr,size);
    int min= mininarr(arr,size);


}