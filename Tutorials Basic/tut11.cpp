//To print the number of prime in all range
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the starting range:"<<endl;
    int start;
    cin>>start;
    cout<<"Enter the end range:"<<endl;
    int end;
    cin>>end;
    for(int num=start; num<end ; num++){
        int count=0;
        //cout<<"This is NUmber____________"<<num<<endl;
        int div;
        for(div=2; div<num; div++){
            //cout<<"This is div__________"<<div<<endl;
            if(num%div==0){
                break;
            }
            
        }
        if (div==num){
            cout<<num<<"This Number is Prime"<<endl;
        }


    }

}