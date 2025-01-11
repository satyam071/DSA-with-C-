//Given Sorted and rotated array in which we have to find the index of the key given


#include<iostream>
using namespace std;
int FindPivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}
int BinarySearch(int arr[],int s,int e,int key){
    int start =s;
    int end=e;
    int ans=-1;
    int mid= start + (end-start)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start + (end-start)/2;


    }
    return -1;
}
int main(){
    int arr[5]={7,8,9,1,2};
    int size=5;
    int key=9;
    int pivot=FindPivot(arr,5);
    //cout<<pivot<<endl;
    if(arr[pivot]<=key && key<=arr[size-1]){
        cout<<BinarySearch(arr,pivot,size-1,key);
    }
    else{
        cout<<BinarySearch(arr,0,size-1,key);
    }

}