class Solution {
public:
    int missingNumber(vector<int>& nums) {

     int tot_sum =0, run_sum=0; 

     for(int i=0; i< nums.size(); i++){
        tot_sum = tot_sum + (i+1);

        run_sum = run_sum + nums[i];
 
     }

     return tot_sum-run_sum;  
    }
};