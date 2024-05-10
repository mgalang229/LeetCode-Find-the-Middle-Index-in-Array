class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = 0;
        for (int& x : nums) {
            total += x;
        }
        int cur = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0) {
                cur += nums[i-1];
            }
            total -= nums[i];
            if (cur == total) {
                return i;
            }
        }
        return -1;
    }
};
