class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {

        if (hour <= dist.size() - 1) return -1;

        int l = 1, r = 1e7; 
        int result = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            double total_time = 0;

            
            for (int i = 0; i < dist.size() - 1; i++) {
               
                total_time += ceil((double)dist[i] / mid);
            }

            total_time += (double)dist.back() / mid;

            if (total_time <= hour) {
                result = mid; 
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return result;
    
        
    }
};