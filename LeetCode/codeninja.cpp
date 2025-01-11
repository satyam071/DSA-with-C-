#include<iostream>
using namespace std;
int inputarr(int arr[],int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}
int uniqueelement(int arr[],int size){
    int unique=0;
    for(int index=0;index<size;index++){
        unique=unique^arr[index];
    
    }
    cout<<unique<<endl;
        
}
   

int main(){
    
    int size;
    cout<<"Enter the range :";
    cin>>size;
    int arr[size];
    inputarr(arr,size);
    uniqueelement(arr,size);
}