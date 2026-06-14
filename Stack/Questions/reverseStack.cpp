void insertAtBottom(stack<int>& stack, int value){
    //base case
    if(stack.empty()){
        stack.push(value);
        return;
    }
    //storing top value
    int num=stack.top();
    stack.pop();
    insertAtBottom(stack,value);

    stack.push(num);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    //base case
    if(stack.empty()){
        return;

    }
    int num=stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack,num);
}