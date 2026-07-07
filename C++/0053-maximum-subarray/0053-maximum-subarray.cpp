class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's algo

        int sum = 0, max_sum = INT_MIN;

        for(int r=0; r<nums.size(); r++){
            
            sum = sum + nums[r];
            max_sum = max(max_sum, sum);
            if(sum<0){
                sum =0;
            }
        }

        return max_sum;
    }
};