#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector <int> arr={1,2,3,4,5};
    int n=arr.size();
    
    int rotate=2;
    for(int i=0;i<rotate;i++){
        int lastnum=arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
            
        }
        arr[n-1]=lastnum;
    }
    for(int num: arr){
        cout<<num<<" ";
    }
}