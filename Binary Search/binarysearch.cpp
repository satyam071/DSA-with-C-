#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid =start + (end-start)/2;



    }
}
int main(){
    int arrodd[5]={34,44,54,65,78};
    int arreven[6]={12,33,42,45,67,88};
    int oddindex= binarysearch(arrodd,5,65);
    int evenindex=binarysearch(arreven,6,88);
    cout<<"The ODD index is: "<<oddindex;
    cout<<"The EVEN index is: "<<evenindex;

}