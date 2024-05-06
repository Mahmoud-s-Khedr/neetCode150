class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char ,int >mp;
        int st=0;
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])==0||mp[s[i]]<st){
                mp[s[i]]=i;
                maxlen=max(maxlen,i-st+1);
            }else{
                st=mp[s[i]]+1;
                mp[s[i]]=i;
            }
        }
        return maxlen;
    }
};
