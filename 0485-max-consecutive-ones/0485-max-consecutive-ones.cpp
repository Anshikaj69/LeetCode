class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int freq=0,max_freq=0;
        for(int i=0; i< nums.size(); i++){

            if(nums[i]==1){
                freq++;
                max_freq= max(freq, max_freq);
            }else{
                freq=0;
            }
        }
        return max_freq;
    }
};