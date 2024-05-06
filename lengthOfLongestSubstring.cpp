class Solution {
public:
    int trytofind(string c,char s){
        for(int i=0;i<c.size();i++){
            if(c[i]==s){
                return i;
            }
        }
        return -1;
    }
    int lengthOfLongestSubstring(string s) {
        string c="";
        int ans=0;
        int index=0;
        for(int i=0;i<s.size();i++){
            index = trytofind(c,s[i]);
            if(index!=-1){
                c.erase(c.begin(),c.begin()+index+1);
            }
            c.push_back(s[i]);
            if(c.size()>ans){
                ans=c.size();
            }
        }
        return ans;
    }
};
