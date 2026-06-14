// Approch 1

class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        stack <int> s;
        while(!q.empty()){
            int element=q.front();
            q.pop();
            s.push(element);
        }
        while(!s.empty()){
            int element=s.top();
            s.pop();
            q.push(element);
        }
        return;
    }
};

// Approach 2

// recursion