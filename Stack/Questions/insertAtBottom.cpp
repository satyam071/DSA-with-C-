#include <bits/stdc++.h> 
void solve(stack<int>& stack, int value){
    //base case
    if(stack.empty()){
        stack.push(value);
        return;
    }
    //storing top value
    int num=stack.top();
    stack.pop();
    solve(stack,value);

    stack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return myStack;
}
                                             