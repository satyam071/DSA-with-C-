#include<iostream>
using namespace std;
void inputarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void swapalternate(int arr[], int size){
    int index1=0,index2=1;
    while(index2<size){
        swap(arr[index1],arr[index2]);
        index1=index1+2;
        index2=index2+2;
        //cout<<endl<<index1<<endl<<index2<<endl;
    }
    cout<<"The SWAPPED arry is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];


    inputarr(arr,size);
    swapalternate(arr,size);
}