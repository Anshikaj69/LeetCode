class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int sum=0, min_sum = INT_MAX, max_sum = INT_MIN;

        for(int r = 0; r< nums.size() ; r++){
            sum = sum + nums[r];
            max_sum = max( max_sum, sum);
            if(sum < 0){
                sum = 0;
            }
        } 

        sum =0;
        for(int r = 0; r< nums.size() ; r++ ){

            if(sum + nums[r] < nums[r]){
                sum = sum + nums[r];
            }else{
                sum = nums[r];
            }

            max_sum = max (max_sum , ( (sum<0)? (sum*-1) : sum ));
        }

        return max_sum;
    }
};