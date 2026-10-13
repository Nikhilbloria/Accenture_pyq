class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        long long sum1 =0,sum2 =0;
        int n = nums.size();
        for(int i=0;i<n/2;i++){
            sum1 += nums[i];
        }
        for(int i=n/2;i<n;i++){
            sum2 += nums[i];
        }
        return sum2-sum1;
    }
};