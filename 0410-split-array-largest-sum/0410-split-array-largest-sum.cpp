class Solution {
public:
    bool canSplit(vector<int>& nums, int k, long long limit) {
        int parts = 1;
        long long sum = 0;

        for (int x : nums) {
            if (sum + x > limit) {
                parts++;
                sum = x;

                if (parts > k)
                    return false;
            }
            else {
                sum += x;
            }
        }

        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        long long low = 0;
        long long high = 0;

        for (int x : nums) {
            low = max(low, (long long)x);
            high += x;
        }

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (canSplit(nums, k, mid)) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return (int)low;
    }
};