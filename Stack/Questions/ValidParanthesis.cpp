bool isValidParenthesis(string s)
{
    // Write your code here.
    //sample input- {[]}
    stack <char> st;

    for (int i=0;i<s.length();i++){
        char ch=s[i];

        //check whether opening or closing bracket
        if(ch=='(' || ch=='{' || ch=='['){//opening bracket

            st.push(ch);

        }
        else{//closing bracket
            if(!st.empty()){
                char top=st.top();
                if((ch==')' && top=='(') || 
                ( ch=='}' && top=='{' ) ||
                ( ch==']' && top=='[' )){
                        st.pop();
                    }
                else{
                    return false;
                }
            }
            else{
                return false;
            }

        }


        
    }
    if(st.empty()){
        return true;

    }
    else{
        return false;
    }
}