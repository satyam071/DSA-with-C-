#include<iostream>

using namespace std;
void revTheString(int s,int e,string& ch){
    if(s>e){
        return ;
    }
    swap(ch[s],ch[e]);
    s++;
    e--;
    revTheString(s,e,ch);

}

int main(){
    string ch="abcd";
    int s=0;
    int e=ch.length()-1;
    revTheString(s,e,ch);
    cout<< ch ;
}