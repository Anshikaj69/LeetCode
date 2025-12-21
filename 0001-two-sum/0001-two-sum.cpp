#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        int key;
        vector<int> res;
        for(int i = 0; i< nums.size()-1; i++){
            key = target - nums[i];
            vector<int>::iterator it = find(nums.begin()+ (i+1), nums.end(), key);
            if (it != nums.end()) {
                res.push_back(i);
                res.push_back(distance(nums.begin(), it));
                return res;
        }
        }

        return res;
    }
};