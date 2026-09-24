class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        mp[0] = 1;

        int sum = 0;
        int cnt = 0;

        for(int x : nums) {
            sum += x;

            if(mp.count(sum - k)) {
                cnt += mp[sum - k];
            }

            mp[sum]++;
        }

        return cnt;
    }
};