class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        vector<int> ans(temperatures.size());
        stack<int> s;
        int curr;

        for (int i = temperatures.size()-1; i >= 0; i--){
            curr = temperatures[i];

            while(!s.empty() && temperatures[s.top()] <= curr){
                s.pop();
            }
            
            if(s.empty()){
                ans[i] = 0;
            }else if(temperatures[s.top()] > curr){
                ans[i] = (s.top() - i);
            }

            s.push(i);
        }

        return ans;
    }
};