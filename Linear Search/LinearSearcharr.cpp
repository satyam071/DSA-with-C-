//Given an array and we have to find that the given number is present on the array or not if yes then print the index of the array location.
#include<iostream>
using namespace std;
bool search(int arr[],int size, int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return 1;
        }
    return 0;
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int element;
    cout<<"Enter the element you wanna search:";
    cin>>element;
    //search(arr,10,element);
    bool found= search(arr,10,element);
    if(found){
        cout<<"The given element is in the array";

    }
    else{
        cout<<"The given element is not in the array";
    }

}