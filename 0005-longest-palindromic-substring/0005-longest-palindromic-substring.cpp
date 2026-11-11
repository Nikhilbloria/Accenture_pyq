class Solution {
public:

    bool ispalindrome(string &s,int i, int j){
        if(i>=j)return true;
            if(s[i]==s[j]){
                return ispalindrome(s,i+1,j-1);
            }
        return false;
    }
    string longestPalindrome(string s) {
        int n = s.length();
        int maxi = INT_MIN;
        int start = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(ispalindrome(s,i,j)){
                    int len = j-i+1;
                    if(len>maxi){
                        maxi = len;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start,maxi);
    }
};