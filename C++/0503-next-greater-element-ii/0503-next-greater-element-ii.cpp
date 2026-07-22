class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> s;
        int curr, n = nums.size();

        for(int i= (2*n)-1 ; i>=0 ; i--){
            curr = nums[i%n];

            while(!s.empty() && s.top() <= curr){
                s.pop();
            }

            if(s.empty() && i < n){
                nums[i] = -1;
            }
            else if(!s.empty() && s.top() > curr && i<n){
                nums[i] = s.top();
            }

            s.push(curr);
        }

        return nums;
    }
};