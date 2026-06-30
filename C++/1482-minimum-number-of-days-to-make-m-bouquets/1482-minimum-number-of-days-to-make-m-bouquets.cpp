class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        long long flowers= (long long)m*k;
        if(bloomDay.size()< flowers)return -1;

        int l=1, r=*max_element(bloomDay.begin(), bloomDay.end()), mid, bouq, res=-1;

        while(l<=r){
            mid = (l+r)/2;
            int i=0;
            bouq=0;

            cout<< "";
            cout<< l<< "," << r;
            for(int j=0; j<bloomDay.size(); j++){
              if(j-i+1 > k ){
                i++;
              }

              if(bloomDay[j]> mid){
                i=j+1;
                continue;
              }

              if(j-i+1 == k){
                    bouq += 1;
                    // cout<< i << "," <<j;
                    i=j+1;
              }
            }
            // cout<< "bouk:" << bouq<<".";
            if(bouq < m){
                l=mid+1;
            }else{
                res=mid;
                r=mid-1;
            }
        }

        return res;
    }
};