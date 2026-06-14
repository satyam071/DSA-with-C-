class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int n=arr.size();
        deque<int> dq;
        vector<int> ans;
        //process for first window
        for(int i=0;i<k;i++){
            if(arr[i]<0){
                dq.push_back(i);
            }
        }
        if(dq.size()>0){
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
        //process for rest of the windows
        for(int i=k;i<n;i++){
            if(!dq.empty() && i-dq.front() >= k){
                dq.pop_front();
            }
            if(arr[i]<0){
                dq.push_back(i);
            }
            if(dq.size()>0){
            ans.push_back(arr[dq.front()]);
            }
            else{
                ans.push_back(0);
            }
            
        }
        return ans;
        
    }
}; 