#include<iostream>
using namespace std;
int linearSearch( int arr[],int size, int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;

    }
    else{
        bool remainingPart=linearSearch( arr+1,size-1,key);
        return remainingPart; 

    }
    
}
int main(){
    int arr[5]={6,8,2,4,5};
    int size=5;
    int key=4;
    if(linearSearch(arr,size,key)){
        cout<<"Caught you!";

    }
    else{
        cout<<"O simple thing, where have you gone!";
    }
}