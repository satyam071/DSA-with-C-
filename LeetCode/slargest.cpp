#include<iostream>
using namespace std;
inptarry(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
sndlargest(int arr[],int size){
    int flargest=arr[0];
    int slargest;
    for(int i=0;i<size;i++){
         if(arr[i]>flargest){
            slargest=flargest;
            flargest=arr[i];
         }
    }
    cout<<slargest;

}
int main(){
    int size;
    cout<<"Enter the size:";
    cin>>size;
    int arr[size];
    inptarry(arr,size);
    sndlargest(arr,size);

}