class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> freq;
        int sum =0;
        freq[sum]++;

        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
            if(freq.contains(sum%k) && i!= 0){
                return true;
            }

            if(i>0){
            freq[(sum - nums[i])%k]++;
            }
        }

        return false;
    }
};