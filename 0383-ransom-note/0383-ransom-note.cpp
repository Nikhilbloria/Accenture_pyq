class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        if(ransomNote.length()>magazine.length()){
            return false;
        }
        for(char c :magazine){
            mp[c]++;
        }
        for(char c:ransomNote){
            if(mp.find(c)!=mp.end()&& mp[c]>0){
                mp[c]--;
            }else{
                return false;
            }
        }
        return true;
    }
};