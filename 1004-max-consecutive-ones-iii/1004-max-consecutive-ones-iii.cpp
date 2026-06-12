class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, available_zeroes=k, freq=0;

        for(int r=0; r<nums.size(); r++){
            
            if(nums[r]==0){
                available_zeroes--;
            }
            while(available_zeroes<0){
                if(nums[l] == 0){
                    available_zeroes++;
                }
                l++;
            }

            freq= max(freq, r-l+1);
        }
        return freq;
    }
};