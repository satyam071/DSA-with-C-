#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a (5,10);///initialising all 5 values with 10
    vector<int> last(a);//copies the last vector a 
    cout<<"Vector a is: "<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }

    cout<<"Capacity is "<<v.capacity()<<endl;
    v.push_back(1);//insert 1
    cout<<"Capacity is "<<v.capacity()<<endl;
    v.push_back(2);//insert 2
    cout<<"Capacity is "<<v.capacity()<<endl;
    v.push_back(3);//insert 3
    cout<<"Capacity is "<<v.capacity()<<endl;// tells the size of address v taken
    cout<<"The size is "<<v.size()<<endl;//tells the size of v

    cout<<"The value at index 2 is "<<v.at(2)<<endl;//showcase the value at 2

    cout<<"The front elemnt "<<v.front()<<endl;//showcase the front value
    cout<<"The back elemnt "<<v.back()<<endl;//showcase the back value

    cout<<"Vector before POP"<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    v.pop_back();//pop the item from back
    cout<<"Vector after pop"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

}