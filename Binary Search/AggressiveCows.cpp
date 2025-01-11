#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxarr(int arr[],int size){
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    return max;
}
int minarr(int arr[],int size){
    int min=1;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }

    }
    return min;
}
bool cowsplaced(int arr[],int size,int mid,int AggressiveCows){
    int countcows=1;
    int lastpos=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]-lastpos>=mid){
            countcows++;
            if(countcows==AggressiveCows){
                return true;
            }
            lastpos = arr[i];
        }   
    }
    return false;
}
int MaxCowDist(int arr[],int size,int AggressiveCows){
    int start=0;
    int max=maxarr(arr,size);
    int min=minarr(arr,size);
    int end=max;
    int mid= start+(end-start)/2;
    //cout<<max<<endl<<min<<endl<<end<<endl;
    int ans=-1;
    while(start<=end){
        if(cowsplaced(arr,size,mid,AggressiveCows)){
            ans=mid;
            //cout<<"The Val of ans is: "<<ans;
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }
        mid= start+(end-start)/2;

    }
    return ans;
}
int main(){

    int size=6;
    int AggressiveCows=4;
    int arr[size]={0, 3, 4, 7, 10, 9};
    cout<<"The Maximum distance between the aggressive cows are :"<<MaxCowDist(arr,size,AggressiveCows);
}