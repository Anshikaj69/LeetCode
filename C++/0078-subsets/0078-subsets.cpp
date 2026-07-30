class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int n = pow(2, nums.size());
        vector<vector<int>> ans;

        for(int bitIndex = 0; bitIndex < n; bitIndex++){
            vector<int> list;
            for(int i = 0; i< nums.size(); i++){
                if( (bitIndex & 1<<i) != 0 ){
                    list.push_back(nums[i]);
                }
            }

            ans.push_back(list);
        }

        return ans;
    }
};