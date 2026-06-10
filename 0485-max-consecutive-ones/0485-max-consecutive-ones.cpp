class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0, freq=0, r=0,max_freq=0;
        for(int i=0; i< nums.size(); i++){

            if(nums[i]==1){
                freq++;
                r= (l+freq-1);
                max_freq= max(freq, max_freq);
            }else{
                freq=0;
                l = i+1;
            }
        }
        return max_freq;
    }
};