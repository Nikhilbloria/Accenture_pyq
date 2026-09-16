class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = max(word1.length(),word2.length());
        string gg = "";
        for(int i=0;i<n;i++){
            if(i<word1.length()){
                gg+=word1[i];
            }
            if(i<word2.length()){
                gg+=word2[i];
            }
        }
        return gg;
    }
};