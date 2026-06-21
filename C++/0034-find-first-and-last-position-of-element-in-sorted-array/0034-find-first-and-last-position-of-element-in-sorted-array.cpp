class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        

        int l=0, r= nums.size()-1, mid;
        vector<int> solution(2, -1);
        
        //lowerbound
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid] == target){

                if(mid-1>=0 && nums[mid-1] == target){
                    r=mid-1;
                }else{
                    solution[0] = mid;
                    break;
                }
            }
            
            else if(nums[mid] < target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }

        l=0;
        r=nums.size()-1;
        mid=0;

        //upperbound

         while(l<=r){
            mid = (l+r)/2;
            
            if(nums[mid] == target){

                if(mid+1<nums.size() && nums[mid+1] == target){
                    l=mid+1;
                }else{
                    solution[1] = mid;
                    break;
                }
            }
            else if(nums[mid] < target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return solution;
        
    }

};