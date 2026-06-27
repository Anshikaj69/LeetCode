class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int l = 1, r = 0;
        for (int val : piles) {
            r = max(r, val); 
        }

        while (l < r) {
            int mid = l + (r - l) / 2; 
            long long total_hours = 0;
            
            for (int p : piles) {
                // Ceiling division: (p + mid - 1) / mid
                total_hours += (long long)(p + mid - 1) / mid;
            }

            if (total_hours <= h) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};