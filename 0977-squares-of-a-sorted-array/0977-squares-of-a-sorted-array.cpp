class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int i=0, j = (int)nums.size()-1, si= (int)nums.size()-1;
        vector<int> sv(nums.size(), 0);

        while(i<=j){
            if( abs(nums[i])> abs(nums[j]) ){
                sv[si]= nums[i]*nums[i];
                i++;
                si--;
            }else{
                sv[si]= nums[j]*nums[j];
                j--;
                si--;
            }
        }

        return sv;
    }
};