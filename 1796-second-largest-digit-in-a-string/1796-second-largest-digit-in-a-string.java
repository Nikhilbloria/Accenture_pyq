class Solution {
    public int secondHighest(String s) {
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i=0;i<s.length();i++){
            char c = s.charAt(i);
            if(Character.isDigit(c)){
                int digit = c -'0';
                map.put(digit,1);
            }
        }
        int largest = -1;
        int second = -1;
        for(int digit:map.keySet()){
            if(digit>largest){
                second = largest;
                largest = digit;
            }else if (digit>second){
                second = digit;
            }
        }
        return second;
    }
}