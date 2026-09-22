class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string  g= "";
        for(char c:s){
            if(c!=' '){
                g+=c;
            }else if(g!=""){
                st.push(g);
                g = "";
            }
        }
        if(g!=""){
            st.push(g);
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty()){
                ans+=" ";
            }
        }
        return ans;

    }
};