// #include<iostream>
// using namespace std;

// int reversearr(int arr[],int size){
//     cout<<arr[-1]<<endl;
//     int revindex=size-1;
//     for(int i=0;i<size;i++){
//         swap(arr[revindex],arr[i]);
//         revindex--;

//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
    
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     cout<<arr[1]<<endl;
//     arr[1]=arr[5];
//     cout<<endl<<"-------"<<arr[1]<<"----"<<endl;
//     reversearr(arr,5);


// }
#include<iostream>
using namespace std;
void reversearr(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    reversearr(arr,5);
    printarr(arr,5);
}