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