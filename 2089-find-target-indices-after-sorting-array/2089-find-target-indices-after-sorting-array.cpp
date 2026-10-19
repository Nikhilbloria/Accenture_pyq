class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int sm = 0;
        int eq = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                sm++;
            }else if(nums[i]==target){
                eq++;
            }
        }
        vector<int>ans;
        for(int i = sm;i<sm+eq;i++){
            ans.push_back(i);
        }
        return ans;
    }
};