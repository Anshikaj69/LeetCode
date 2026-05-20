class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        if(nums.size() == 0){return 0;}
        int i=0,j=nums.size()-1;

        while(i<=j){
            if(nums[i] == val){
                if(nums[j]!= val){
                    swap(nums[i], nums[j]);
                    i++;
                    
                }else{
                    if(j-1>=0){
                    j--;
                    }else{
                        return j;
                    }
                }
            }else{
                i++;
            }
        }
        return j+1;
    }
};