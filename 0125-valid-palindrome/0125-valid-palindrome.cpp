class Solution {
public:
    bool isPalindrome(string s) {
        string gg = "";
        for(char c:s){
            char f = tolower(c);
            if(isalnum(f)){
                gg += tolower(f);
            }
        }
        int i=0;
        int j=gg.size()-1;
        while(i<j){
            if(gg[i]!=gg[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};