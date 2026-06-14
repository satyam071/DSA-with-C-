#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findpivot(int arr[],int size){
    int first=0;
    int second=0;
    int count=0;
    for(int i=0;i<size;i++){
        first=arr[i];
        second=arr[i+1];
        count++;
        if(first>second){
            cout<<count<<endl;
            return second;
            



        }

    }

}
// int smallestswap(int arr[],int size,int pivot){
//     for(int i=pivot;i<size;)
// }
int main(){
    int arr[6]={2,4,1,7,5,0};
    int size=6;
    int pivot=findpivot(arr,size);
    // int smallest=smallestswap(arr,size,pivot);
    cout<<pivot<<endl;
}