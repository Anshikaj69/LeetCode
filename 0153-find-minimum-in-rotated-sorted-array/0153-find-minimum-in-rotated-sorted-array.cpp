class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, r =nums.size()-1, min_val=nums[r], mid;
       

        while(l<=r){

             if(nums[l]<= nums[r]){ 
                min_val =  min(min_val, nums[l]);
                return min_val; 
            }

             mid = (l+r)/2;
             min_val = min(min_val, nums[mid]);

             if(nums[l] <= nums[mid] ){
                l=mid+1;
             }

             if(nums[mid] <= nums[r]){
                r=mid-1;
             }


        }

        return min_val;
    }
};