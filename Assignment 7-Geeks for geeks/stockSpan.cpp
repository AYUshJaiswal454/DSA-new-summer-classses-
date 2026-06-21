class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        
        stack<int> s;
        vector<int> ans;
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[i]>=arr[s.top()]){
                s.pop();
            }
            if(s.empty()){
                ans.push_back(i+1);
            }
            else{
                ans.push_back(i-s.top());
            }
            s.push(i);
        }
        return ans;
        
    }
    
};
