// LEETCODE 1207  Duplicate in array {1,2,3,4,4}
#include<iostream>
using namespace std;
int input_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    return 0;
}
int check_duplicate(int arr[],int size){
    bool ans=1;

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==j){
                continue;
            }
            //cout<<endl<<"----"<<arr[i]<<endl;
            //cout<<endl<<"----"<<arr[j]<<endl;
            if(arr[i]==arr[j]){
                //cout<<endl<<"HELLO PETER"<<endl;
                ans=0;

            }
        }
        if(ans==0){
            cout<<arr[i]<<" Is the duplicative number";
            break;

        }

    }
}

int main(){
    int size;
    cout<<"Enter the size if the array:";
    cin>>size;
    int arr[size];
    input_arr(arr,size);
    check_duplicate(arr,size);
}