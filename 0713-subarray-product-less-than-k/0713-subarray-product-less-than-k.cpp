class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long prod =1;
        int count =0, l=0;
        
        if(k==0 || k==1) return 0;

        for(int r=0; r<nums.size(); r++){

            prod = prod * nums[r];

            while(prod>=k){
                prod = prod/nums[l];
                l++;
            }

            if(prod < k){
                count = count + (r-l+1);
            }
        }
        return count;
    }
};