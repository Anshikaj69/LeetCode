class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> next;
        unordered_map<int,int> nge;

        for(int i = nums2.size()-1; i>=0; i--){

            while( !next.empty() && next.top() < nums2[i] ){
                next.pop();
            }

            if(next.empty()){
                next.push(nums2[i]);
            }else if(next.top() > nums2[i]){
                nge[nums2[i]] = next.top();
                next.push(nums2[i]);
            }
        }

    for(int i = 0; i< nums1.size(); i++){
        if(nge.contains(nums1[i])){
            nums1[i] = nge[nums1[i]];
        }else{
             nums1[i] = -1;
        }
    }
        return nums1;

    }
};