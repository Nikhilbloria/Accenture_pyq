class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            maxi = max(maxi,nums[i]);
        }
        for(int i=0;i<n;i++){
            sum += abs(maxi-nums[i]);
        }
        return sum;
    }
};