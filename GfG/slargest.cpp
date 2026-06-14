#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int getsecondlargest(vector<int> &arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=n-2;i>=0;i--){
        if (arr[i] != arr[n - 1]) {
            return arr[i];
        };
    
    }
    return -1;
}
int main(){
    vector<int> arr={ 12, 35, 1, 10, 34, 1 };
    int slargest=getsecondlargest(arr);
    cout<<slargest;

    
}