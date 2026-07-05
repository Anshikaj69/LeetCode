class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        
        long long sum = 0, r = 0;
        partial_sort(nums.begin(), nums.begin()+k ,  nums.end(), greater<int>());

        while(k>0){

            if(mul>0){
                sum = sum + (long long)mul*nums[r];
            }else{
                sum += nums[r];
            }

            mul--;
            k--;
            r++;
        }

        return sum;
    }
};