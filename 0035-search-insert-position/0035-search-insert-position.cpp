class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       auto ix = lower_bound(nums.begin(), nums.end(), target);
    
       return ix - nums.begin();
    }
};