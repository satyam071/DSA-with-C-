#include<iostream>
using namespace std;
bool check(int arr[],int arr2,int n,int i ){
    for(int m=0;m<n;m++){
        if(arr[i]==arr2[m]){
            return false;
        }

    }
    return true;
}
int main(){
    int n=7;
    int arr[n]={2, 1, 2, 1, 5, 5, 2};
    int arr2[n];
    int ocount=0,ecount=0,index=0;
    for(int i=0;i<n;i++){
        int count=0;
        if(check(arr,arr2,n,i)){
            
            for(int j=0;j<n;j++){
                //if(i==j){
                //    continue;
                //}
                
                if(arr[i]==arr[j]){
                    count++;
                }
                

            }
            if(count%2==0){

                ecount++;
                arr2[i]=arr[i];
                index++;
            }
            else{
                ocount++;
                arr2[i]=arr[i];
                index++;
            }
        }

        
            
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    //cout<<"EVEN COUNT IS: "<<ecount<<endl;
    //cout<<"ODD COUNT IS: "<<ocount<<endl;
}