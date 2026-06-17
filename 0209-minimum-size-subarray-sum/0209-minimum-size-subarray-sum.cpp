class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int infinity = numeric_limits<int>::max();

        int l=0, sum =0, min_len=infinity;

        for(int r=0; r<nums.size(); r++){
           
           sum = sum + nums[r];

           while(sum>=target){
            min_len= min(min_len, (r-l+1));

            sum = sum - nums[l];
            l++;
           }
            
        }

        return (min_len== numeric_limits<int>::max())? 0 : min_len;
    }
};