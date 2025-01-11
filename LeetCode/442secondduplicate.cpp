#include<iostream>
using namespace std;
int inputarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int twoduplicate(int arr[],int size){
    int check=arr[0];
    int newarr[size];
    int count=0,index=0;
    int skip=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0;k<index;k++){
                if(newarr[k]==arr[i]){
                    skip=1;

                }
            }
            if(skip==1){
                continue;
            }
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                count++;

            }
        }
        if(count==1){
            newarr[index]=arr[i];
            index++;

        }
        count=0;
    }
    for(int i=0;i<index;i++){
        for(int j=0;j<index;j++){

        }
        cout<<newarr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    inputarray(arr,size);
    twoduplicate(arr,size);
}