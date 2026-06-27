class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
 int l = 1, r = 0;
        for (int val : piles) {
            r = max(r, val); // Range ends at the largest pile
        }

        while (l < r) {
            // Standard mid calculation to prevent overflow
            int mid = l + (r - l) / 2; 
            long long total_hours = 0;
            
            for (int p : piles) {
                // Ceiling division: (p + mid - 1) / mid
                total_hours += (long long)(p + mid - 1) / mid;
            }

            if (total_hours <= h) {
                // This speed works! Look for a smaller speed to the left
                r = mid;
            } else {
                // Too slow, we must increase the speed
                l = mid + 1;
            }
        }

        // When l == r, we have found the absolute minimum speed
        return l;
    }
};