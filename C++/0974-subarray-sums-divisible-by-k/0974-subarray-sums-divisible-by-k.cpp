class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int sum=0, count=0;
        unordered_map<int,int> freq;

        freq[sum]++;

        for(int i=0; i<nums.size(); i++){

            sum = sum + nums[i];

            if(sum<0){
                sum = k - ((sum * -1) % k);
            }
            
            if( freq.contains(sum%k) ){
                count = count + freq[sum%k];
            }

            freq[(sum)%k]++;
        }

        return count;
    }
};