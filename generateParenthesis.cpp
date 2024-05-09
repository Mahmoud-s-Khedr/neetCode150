class Solution {
    vector<string>ans;
public:
    void dfs(string s,int open,int close){
        if(open>0){
            dfs(s+"(",open-1,close);
        }
        if(close>0&&open!=close){
            dfs(s+")",open,close-1);
        }
        if(open==0&&close==0){
            ans.push_back(s);
        }
    }
    vector<string> generateParenthesis(int n) {
        dfs("(",n-1,n);
        return ans;
    }
};
