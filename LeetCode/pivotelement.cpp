#include<iostream>
using namespace std;
int FindPivot(int arr[],int size){
    int s=0;
    int e=size -1;
    int mid= s + (e-s)/2;
    while(s<e){
        if (arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s + (e-s)/2;

        
    }
    return s;
}
int main(){
    int arr[6]={2,4,1,7,5,0};
    int PivotNum=FindPivot(arr,6);
    cout<<"The Pivot Element is :"<<PivotNum;
}