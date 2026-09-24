class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int ans=-1;
        for(int i=0;i<n;i++){
            int sum = 0;
            int k = nums[i];
            while(k>0){
                int dig = k%10;
                sum+=dig;
                k/=10;
            }
            if(sum==i){
            ans = i;
            break;
            }
        }
        return ans;
    }
};