//{4,12,3,7,11}
//{11,7,3,12,4}
#include<iostream>
#include<vector>
using namespace std;
vector<int> revarr(vector <int> n,int index){
    int start=index;
    int end=n.size()-1;
    while(start<=end){
        swap(n[start],n[end]);
        start++;
        end--;
    }
    return n;

}
void print(vector <int> n){
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<" ";

    }
    cout<<endl;
}
using namespace std;
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(12);
    v.push_back(3);
    v.push_back(7);
    v.push_back(11);
    int index=3;

    vector<int> ans= revarr(v,index);
    print(ans);
 

}