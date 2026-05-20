class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> freq;
        long long currentSum = 0;
        long long max_sum = 0;

        int l = 0;

        for(int r = 0; r < nums.size(); r++){

            // Add incoming element
            currentSum += nums[r];
            freq[nums[r]]++;

            // Keep window size exactly k
            if(r - l + 1 > k){

                currentSum -= nums[l];

                freq[nums[l]]--;

                if(freq[nums[l]] == 0){
                    freq.erase(nums[l]);
                }

                l++;
            }

            // Window size is k
            if(r - l + 1 == k){

                // All elements distinct
                if(freq.size() == k){
                    max_sum = max(max_sum, currentSum);
                }
            }
        }

        return max_sum;
    }
};