class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int l=0;
        map<int,int> freq;
        vector<int> maxSW;
        for(int r=0; r<nums.size(); r++){
            freq[nums[r]]++;

            if( (r-l+1) > k ){
               freq[nums[l]]--;
               if(freq[nums[l]] == 0){ freq.erase(nums[l]); }

               l++;
            }

            if((r-l+1) == k){
                maxSW.push_back(freq.rbegin()->first);
            } 
        }

        return maxSW;
    }
};