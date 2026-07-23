class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        
        long long sum = 1;
        int prev = nums[0];
        int i=0;

        for(int j=1; j< nums.size(); j++){

            if( nums[j] == prev){
                i=j;
            }
            sum = sum + (j-i+1);
            prev = nums[j];
        }

        return sum;
    }
};