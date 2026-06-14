#include<iostream>
using namespace std;
void mergearray(int arr1[],int a,int arr2[],int b,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<a && j<b){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
    
        }
        else{
            arr3[k++]=arr2[j++];
    
        }
    }
    while(i<a){
        arr3[k++]=arr1[i++];
    }
    while(j<b){
        arr3[k++]=arr1[j++];
    }



}
void print(int ans[],int a){
    for(int i=0;i<a;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};

    mergearray(arr1,5,arr2,3 ,arr3);
    print(arr3,8);
}