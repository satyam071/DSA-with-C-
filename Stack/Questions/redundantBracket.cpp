#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<int> st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];

        //cases

        //case1: if opening bracket or any operator or any operator is present
        if(ch=='(' || ch=='+' || ch=='-'|| ch=='*'|| ch=='/'){
            st.push(ch);
        }
        //case2: if closing bracket or alphabets are there
        else{
            if(ch==')'){
                bool isRedundant=true;
                while(st.top()!='('){
                    int top=st.top();
                    if(top=='(' || top=='+' || top=='-'|| top=='*'|| top=='/'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant==true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
