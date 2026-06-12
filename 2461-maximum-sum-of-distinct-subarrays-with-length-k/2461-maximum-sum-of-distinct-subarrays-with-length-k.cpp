class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        int l = 0;
        long long sum=0, max_sum=0;

        for(int r=0; r<nums.size(); r++){

            freq[nums[r]]++;
            sum = sum + nums[r];

            if(r-l+1 > k){
                freq[nums[l]]--;
                if(freq[nums[l]] ==0){
                    freq.erase(nums[l]);
                }
                sum = sum - nums[l];
                l++;
            }


            if(r-l+1 == k){
                if(freq.size() == k){
                    max_sum = max(sum, max_sum);
                }
            }
        }
       

        return max_sum;
        
    }
};