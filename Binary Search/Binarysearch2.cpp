//724(Leetcode)


// Given an array of integers nums, calculate the pivot index of this array.

// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

// If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

// Return the leftmost pivot index. If no such index exists, return -1.

 

// Example 1:

// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11
// Example 2:

// Input: nums = [1,2,3]
// Output: -1
// Explanation:
// There is no index that satisfies the conditions in the problem statement.
// Example 3:

// Input: nums = [2,1,-1]
// Output: 0
// Explanation:
// The pivot index is 0.
// Left sum = 0 (no elements to the left of index 0)
// Right sum = nums[1] + nums[2] = 1 + -1 = 0
 

// Constraints:

// 1 <= nums.length <= 104
// -1000 <= nums[i] <= 1000





#include<iostream>
using namespace std;
int firstoccurance(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start/2);
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            end=mid-1;
            
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start/2);
    }
    return ans;
}
int Lastoccurance(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start/2);
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            start=mid+1;
            
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start/2);
    }
    return ans;
}
int main(){
    int arr[5]={1,2,3,3,3};
    int key=3;
    int size=5;
    int ans=firstoccurance(arr,5,key);
    cout<<"The first occurance of the key is: "<<firstoccurance(arr,size,key)<<endl;
    cout<<"The Last occurance of the key is: "<<Lastoccurance(arr,size,key)<<endl;
    int first=firstoccurance(arr,size,key);
    int last=Lastoccurance(arr,size,key);
    int totaloccurance=(last-first)+1;
    cout<<totaloccurance<<endl;




}