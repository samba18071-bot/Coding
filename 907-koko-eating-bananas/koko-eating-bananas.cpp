class Solution {
public:
    // Helper function moved outside to avoid nested function error
    long long calculateHours(vector<int>& piles, int speed) {
        long long hours = 0;
        for (int i = 0; i < piles.size(); i++) {
            // Ceiling division without using floating-point math
            hours += (piles[i] + speed - 1) / speed;
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        
        // Find the maximum element in piles to set the upper bound
        for (int pile : piles) {
            high = max(high, pile);
        }
        
        int res = high;
        
        // Binary search for the minimum working speed
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // If Koko can finish all bananas at 'mid' speed within h hours
            if (calculateHours(piles, mid) <= h) {
                res = mid;       // 'mid' is a potential answer
                high = mid - 1;  // Try to find an even smaller speed
            } else {
                low = mid + 1;   // Too slow, increase the speed
            }
        }
        
        return res;
    }
};