// {2,3,3,5,5,5}
// 2-1
// 3-2
// 5-3

#include<iostream>
using namespace std;
int inptvalue(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[size];
    }
}
//{2,3,3,4,4,4}//i=2==[3]
int findunique(int arr[],int size){
    int ncount[];
    int count=0;
    int newcount=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            // if(i==j){
            //     continue;
            // }
            if(arr[i]==arr[j]){
                count++;

            }

        }
        ncount[i]=count;
    }
    return ncount[];
}
int uniqueelement(int ncount[],int size){
    cout<<"This is running";
    int unique=ncount[0];
    bool ans=0;
    //inptvalue(ncount,size);
    cout<<endl<<size<<endl;
    // for(int i=0;i<size;i++){
    //     cout<<endl<<ncount[i]<<endl;
    // }
    // for(int index=0;index<size;index++){
    //     cout<<endl<<"We're in first loop";
    //     for(int i=1;i<=size;i++){
    //         if(ncount[i]==unique){
    //             ans=1;

    //         }
    //     }
    //     if(ans!=1){
    //         unique=ncount[index];

    //     }

    
    // }
    // cout<<unique<<endl;
}


int main(){
    int size;
    cout<<"Enter any number:"<<endl;
    cin>>size;
    int arr[size];
    inptvalue(arr,size);
    int ncount[1000]={findunique(arr,size)};
    uniqueelement(ncount,sizeof(ncount));
    return 0;
}