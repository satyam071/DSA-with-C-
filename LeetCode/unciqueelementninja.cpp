#include<iostream>
using namespace std;
int inputarry(int arr[],int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

}
//{2 4 7 2 7}
int uniqueelement(int arr[],int size){
    // int index=0;
    // bool ans=1;
    // int unique=arr[index];
    // for(int j=0; j<size ; j++){
    //     cout<<endl<<"-----------"<<j<<unique<<"-------"<<endl;
    //     for(int i=0; i<=size ; i++){
    //         cout<<endl<<"-----------"<<i<<unique<<"-------"<<endl;
    //         if(i==index){
    //             continue;
    //             //unique=arr[index+1];
    //         }
    //         else if(unique==arr[i]){//uniq=2
    //             cout<<endl<<"-----------"<<"This code has run"<<"-------"<<endl;
    //             ans = 0;
    //             unique=arr[i];
    //             break;
    //         }
    //         index++;
    //     if(ans==0){
    //         cout<<unique<<endl;
    //         break;
    //     }
    // }
    int index=0;
    
    int unique;
    for(int i=0; i<size; i++){
        bool ans=0;
        unique=arr[i];

        for(int j=0;j<size;j++){
            if(i==j){
                continue;
            }
            else if(arr[i]==arr[j]){
               // cout<<"Have it"<<endl;
                ans=1;
                break;
                

            }


        }
        if(ans==0){
            cout<<unique<<endl;
            break;
        }

    }

    
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    inputarry(arr,size);
    uniqueelement(arr,size);

}