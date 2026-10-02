class Solution {
public:
    vector<string>result;
    // bool isValid(string &s1){
    //     int cnt = 0;
    //     for(char c:s1){
    //         if(c=='('){
    //             cnt++;
    //         }else{
    //             cnt--;
    //             if(cnt<0){
    //                 return false;
    //             }
    //         }
    //     }
    //     return cnt ==0;
    // }
    void solve(int n, string &s,int open ,int close){
        if(s.length()==2*n){
            // if(isValid(s)){
            //     result.push_back(s);
            // }
            result.push_back(s);
            return;
        }
        if(open<n){
            s.push_back('(');
            solve(n,s,open+1,close);
            s.pop_back();
        }
        if(close<open){
            s.push_back(')');
            solve(n,s,open,close+1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        int open = 0;
        int close = 0;
        string curr = "";
        solve(n,curr,open,close);
        return result;
    }
};