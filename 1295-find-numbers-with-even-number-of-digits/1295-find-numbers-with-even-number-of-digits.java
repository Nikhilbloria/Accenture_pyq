class Solution {
    public int findNumbers(int[] nums) {
        int i=0;
        int cnt = 0;
        while(i<nums.length){
            int n = nums[i];
            int ev = 0;
            while(n>0){
                int dig = n%10;
                ev++;
                n/=10;
            }
            if(ev%2==0) cnt++;
            i++;
        }
        return cnt;
    }
}