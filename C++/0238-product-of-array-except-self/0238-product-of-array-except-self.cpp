class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans(nums.size(),1);
        int prod=1;

        ans[0] = nums[0];
        for(int i= 1; i< nums.size()-1; i++){
            ans[i] = ans[i-1] * nums[i];
        }

        for(int i = nums.size()-1; i>=0; i--){
            ans[i] = prod * ((i-1>=0)? ans[i-1]: 1);
            prod = prod * nums[i];
        }

        return ans;
    }
};