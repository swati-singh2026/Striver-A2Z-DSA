class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {

        unordered_map<long long, int> mp;

        long long prefixSum = 0;
        int maxLength = 0;

        for (int i = 0; i < nums.size(); i++) {

            prefixSum += nums[i];

            // Case 1: Subarray starts from index 0
            if (prefixSum == k) {
                maxLength = i + 1;
            }

            // Case 2: Search previous prefix
            if (mp.find(prefixSum - k) != mp.end()) {
                int length = i - mp[prefixSum - k];
                maxLength = max(maxLength, length);
            }

            // Store only first occurrence
            if (mp.find(prefixSum) == mp.end()) {
                mp[prefixSum] = i;
            }
        }

        return maxLength;
    }
};