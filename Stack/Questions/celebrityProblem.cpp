class Solution {
    private:
    bool knows(vector<vector<int>>& mat,int a,int b,int n){
        if(mat[a][b]==1){
            return true;
        }
        else{
            return false;
        }
    }
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        //Step 1: Push celebrity in a stack 
        stack<int> s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
          //Step 2: Compare two elemnts of stack with a and b
        while(s.size()>1){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            
            if(knows(mat,a,b,n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
            
            
        }
        int ans=s.top();
        int candidate=ans;
        bool rowCheck=false;
        int zeroCount=0;
     
        //step 3: Now top is the potential celebrity check it's row and coloumn  to verifyy
        for(int i=0;i<n;i++){
            if(mat[ans][i] ==0){
                zeroCount++;
                
                
            }
        }
        if(zeroCount!=n){
            return -1;
        }
        
        int oneCount=0;
     
        //step 3: Now top is the potential celebrity check it's row and coloumn  to verifyy
        for(int i=0;i<n;i++){
            if( mat[i][ans] == 1){
                oneCount++;
            }
        }
        if(oneCount!=n-1){
            return -1;
        }
        return ans;
        
    }
};