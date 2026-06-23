class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int pref = 0, total =0, suff=0;

        for(int v : nums){
          total = total + v;
        }

        for(int r=0; r<nums.size(); r++){
          
          suff = total - pref - nums[r];
          if(suff == pref){
            return r;
          }

          pref = pref + nums[r];

        }

        return -1;
    }
};