class Solution {
public:
    vector<string>result;
    bool isValid(string &s1){
        int cnt = 0;
        for(char c:s1){
            if(c=='('){
                cnt++;
            }else{
                cnt--;
                if(cnt<0){
                    return false;
                }
            }
        }
        return cnt ==0;
    }
    void solve(int n, string &s){
        if(s.length()==2*n){
            if(isValid(s)){
                result.push_back(s);
            }
            return;
        }
        s.push_back('(');
        solve(n,s);
        s.pop_back();
        s.push_back(')');
        solve(n,s);
        s.pop_back();
    }
    vector<string> generateParenthesis(int n) {

        string curr = "";
        solve(n,curr);
        return result;
    }
};