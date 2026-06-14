#include<iostream>
using namespace std;
int inputarr(int arr[],int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}
int uniqueelement(int arr[],int size){
    int unique=arr[0];
    bool ans=0;
    for(int index;index<size;index++){
        for(int i=1;i<=size;i++){
            if(arr[i]==unique){
                ans=1;


        }
        if(ans!=1){
            unique=arr[i];

        }

    
    }
    cout<<unique<<endl;
        
}
   
}
int main(){
    int arr[];
    int size;
    cout<<"Enter the range :";
    inputarr(arr,size);
    uniqueelement(arr,size);
}