class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int res = high;
        while (low <= high) {
            int k = low + (high - low) / 2;
            long long int hours = 0;
            for (int i = 0; i < piles.size(); i++) {
                hours += ceil(1.0*piles[i] / k);
            }
            if (hours <= h) {
                res = min(res, k);
                high = k - 1;
            } else {
                low = k + 1;
            }
        }

        return res;
    }
};
