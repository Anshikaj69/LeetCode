class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        

        int l=0; int r=arr.size()-1, mid, result;

        if(r == 0) return arr[0];

        while(l <= r){
            mid = (l + r) / 2;

            int prev = (mid-1 < 0 )? -1 : arr[mid-1];
            int next = (mid+1 >= arr.size())? -1 : arr[mid+1];

            if( prev < arr[mid]){
                if(arr[mid] < next){
                    l = mid+1;
                }else{
                    return mid;
                }
            }else{
                r= mid-1;
            }
        }

        return -1;
    }
};