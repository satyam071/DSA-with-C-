#include<iostream>
using namespace std;
int findPivot(int arr[],int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(pivot>arr[i]){
            count++;
        }
    }
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);
    while(s<pivotIndex && e>pivotIndex){
        while(arr[s]<pivot){
            s++;
        }
        while(arr[e]>pivot){
            e--;
        }
        if(s<pivotIndex && e>pivotIndex){
            swap(arr[s++],arr[e--]);
        }

    }
    return pivotIndex;
}
void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int pivot=findPivot(arr,s,e);
    quickSort(arr,s,pivot-1);
    quickSort(arr,pivot+1,e);


}

int main(){
    int n=5;
    int arr[n]={3,5,1,4,2};
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}