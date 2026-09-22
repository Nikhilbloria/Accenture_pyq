class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        if(s.length()!=t.length()){
            return false;
        }
        for(char c:t){
            mp[c]++;
        }
        for(char c:s){
            if(mp.find(c)==mp.end() || mp[c]==0){
                return false;
            }
            mp[c]--;
        }
        return true;

    }
};