class Solution {
public:
    int findPeakElement(vector<int>& nums) {

     int l=0, r=nums.size()-1, peak = l+ (r/2);

        cout<<peak;
        
     while(1){
        if(peak!=l &&  (nums[peak-1] > nums[peak])  ){
            peak--;
        }
        else if (peak!=r && (nums[peak+1] > nums[peak])  ){
            peak++;
        }else{
            return peak;
        }
     }

    return peak;
    }
};