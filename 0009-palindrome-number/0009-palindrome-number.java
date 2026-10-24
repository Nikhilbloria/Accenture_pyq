class Solution {
    public boolean isPalindrome(int x) {
        int n = x;
        int nya =0;
        while(x>0){
            int dig = x%10;
            nya = nya*10+dig;
            x/=10;
        }
        return n==nya;
    }
}