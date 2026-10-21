class Solution {
    public char repeatedCharacter(String s) {
        int n =  s.length();
       HashSet<Character>set = new HashSet<>();
       for(int i=0;i<n;i++){
        char c = s.charAt(i);
        if(set.contains(c)){
            return c;
        }
        set.add(c);
       } 
       return ' ';
    }
}