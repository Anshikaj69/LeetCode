class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       if (nums.empty()) return;
       if(k> nums.size()){ k = k% nums.size();}

        reverse(nums, 0, nums.size()-1-k);
        reverse(nums, nums.size()-k, nums.size()-1);
        reverse(nums, 0, nums.size()-1);

        cout << "[";
        for(int ele: nums){
            cout<< ele << ",";
        }
        cout << "]";
    }

    void reverse(vector<int>& nums,int l, int r){
        while(l<=r){
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }
};

