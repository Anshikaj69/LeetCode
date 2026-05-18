class Solution {
public:
    void sortColors(vector<int>& nums) {
       int i=0, f=0, l=(nums.size()-1);
       while(i<=l){
        if(nums[i] == 0){
            swap(nums[f], nums[i]);
            f++;
            i++;
        }else if (nums[i] == 2){
            swap(nums[l], nums[i]);
            l--;
        }else{i++;}
       }

    }
};