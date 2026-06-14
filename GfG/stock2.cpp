#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int findstock(vector<int> &arr){
    int buied=0;
    int count=0;
    int n=arr.size();
    int i=0;
    for(i=0;i<n;i++){
        if(arr[i]<arr[i-1] && arr[i]<arr[i+1]){
            buied=arr[i];
            count++;
            cout<<"This loop is working"<<endl;
            cout<<buied<<endl;
            break;

        }
        count++;

    }
    cout<<i<<"Value of i"<<endl;
    for(int j=n-1;j>i;j--){
        if(arr[i]<arr[j] && arr[j]>arr[j+1] && arr[j]>arr[j-1]){
            int profit=arr[j]-buied;
            cout<<"This is profit "<<profit<<"-------"<<endl;
            return profit;
        }
        else{
            return 0;
        }
    }

}
int main(){
    vector<int> arr={7, 6, 4, 3, 1};
    int stock=findstock(arr);
    cout<<"Answer" <<stock<<endl;
}