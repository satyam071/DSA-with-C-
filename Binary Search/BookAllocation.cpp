#include<iostream>
using namespace std;
int maxarr(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;

}
bool bookalloted(int arr[],int mid,int students,int size){
    int count=1;
    int sum=0;
    for(int i=0;i<size;i++){
        if(sum+arr[i]<=mid){
            sum=sum+arr[i];
        }
        else{
            count++;
            if(count>students || arr[i]>mid){
                return false;

            }
            sum=arr[i];


        }

    }
    return true;

}
int AllotBooks(int arr[],int students,int size){
    int start=0;
    int end=maxarr(arr,size);
    int mid= start + (end-start)/2;
    int ans=-1;
    //cout<<"The Value of mid"<<mid<<endl;


    while(start<=end){
        if(bookalloted(arr,mid,students,size)){
            ans=mid;
            end=mid-1;
            //cout<<"This code is executing "<<endl;
        }
        else{
            start=mid+1;
        }
        mid= start + (end-start)/2;
        //cout<<"The Value of mid"<<mid<<endl;


    }
    return mid;
}

int main(){
    int arr[5]={2,8,8,4,5};
    int size=5;
    int students=6;
    cout<<"The ans is :"<<AllotBooks(arr,students,size)<<endl;
    //cout<<maxarr(arr,size)<<endl;
}