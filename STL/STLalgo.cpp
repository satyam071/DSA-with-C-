#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"Finding 6---->"<<binary_search(v.begin(),v.end(),3)<<endl;
    cout<<"Lower Bound----->"<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    int a=10;
    int b=80;
    cout<<"Max "<<max(a,b)<<endl; 
    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string--->"<<abcd<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    sort(v.begin(),v.end());//This sort is based on into sort, intro sort contains of 3 main sorts 1)Quick sort , heapsort and insertion sort
    for(int i:v){
        cout<<i<<" ";
    }
} 