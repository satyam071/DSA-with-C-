#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> arr={1,2,0,4,3,0,5,0};
    sort(arr.begin(),arr.end());
    int i=0;
    int count=0;
    int n=arr.size();
    //finding the number of zeros
    while(i<n){
        if(arr[i]==0){
            count++;

        }
        
        i++;
    }
    cout<<count<<endl;
    //int j=0;
    for(int i=0;i<count;i++){
        for(int j=0;j<n;j++){
            swap(arr[j],arr[j+1]);
        }
        
    }
    for(int j=0;j<n;j++){
        cout<<endl;
        cout<<arr[j]<<" ";
    }
}


