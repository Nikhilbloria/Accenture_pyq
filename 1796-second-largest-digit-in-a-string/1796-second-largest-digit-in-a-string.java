class Solution {
    public int secondHighest(String s) {
        int n = s.length();
        int larg = -1;
        int sec = -1;
        for(int i=0;i<n;i++){
            char c = s.charAt(i);
            if(Character.isDigit(c)){
                int digit = c - '0';
                if(digit>larg){
                    sec = larg;
                    larg = digit;
                }else if(digit<larg && digit>sec){
                    sec = digit;
                }
            }
        }
        return sec;
    }
}   