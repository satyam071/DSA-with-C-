//Finding the square root of the number using binary search

#include<iostream>
using namespace std;
int BinarySearch(int num){
    int start=0;
    int end=num;
    int mid= start + (end-start)/2;
    while(start<end){
        if (mid*mid==num){
            return mid;
            end=mid-1;
        }
        if(mid*mid>num){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid= start + (end-start)/2;
    }
    //return -1;
}
double MorePrecision(int tempnum, int precision,int num ){
    double factor=1;
    double ans= tempnum;
    for (int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans; j*j<num; j=j+factor){
            ans=j;
        }
    }
    return ans;

}
int main(){
    int num=28;
    int ans=BinarySearch(num);
    cout<<"The Square root of the Number is: "<<MorePrecision(ans,3,num)<<endl;

}