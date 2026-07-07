class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int max_prod = INT_MIN, prefix_prod = 1, suffix_prod = 1;
        int j = nums.size();
        for(int i = 0 ; i < nums.size(); i++){

           
            prefix_prod *= nums[i];
            suffix_prod *= nums[j-i-1];
             max_prod = max(max_prod, max(prefix_prod, suffix_prod));
            if(nums[i] == 0 ) {
                prefix_prod = 1;
                
            }
            if( nums[j-i-1] == 0){
                suffix_prod = 1;
            }

           
        }

 

        return max_prod;
    }
};