#include<iostream>
using namespace std;
bool binarySearch(int *arr, int s, int e, int k){
    //base case
    if(s>e){
        return false;

    }
    int mid=s+(e-s)/2;

    //element search
    if(arr[mid]==k){
        return true; 
    }
    if(arr[mid]<k){
        return binarySearch(arr,mid+1, e, k);
    }
    else{
        return binarySearch(arr,s, mid-1, k);

    }

}

int main(){
    int arr[5]={5,8,9,10,12};
    int size=5;
    int key=10;
    cout<<"Present or not"<<binarySearch(arr,0,5,key)<<endl;
}