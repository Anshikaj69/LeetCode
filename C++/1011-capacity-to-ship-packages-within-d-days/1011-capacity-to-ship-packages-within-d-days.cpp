class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int l = *max_element(weights.begin(), weights.end()) ;
        int r = accumulate(weights.begin(), weights.end(),0);

        int mid, sum=0, total_days, min_w=1000000000;

        while(l<=r){
            mid=(l + r)/2;
            total_days=0;
            sum=0;
            for(int i=0; i<weights.size(); i++){
                sum = sum+weights[i];
                if(sum>mid){
                    sum=weights[i];
                    total_days+=1;
                }
            }

            if(sum<=mid){total_days++;}

            if(total_days<=days){
                r=mid-1;
                min_w=min(min_w, mid);
            }else{
                l=mid+1;
            }
        }

        return min_w;
    }
};