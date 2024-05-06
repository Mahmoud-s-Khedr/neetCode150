class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){return false;}
        unordered_map<char,int>mp;
        unordered_map<char,int>temp;
        for(int j=0;j<s1.size();j++){
            mp[s1[j]]++;
        }
        for(int j=0;j<s1.size();j++){
            if(mp.count(s2[j])){temp[s2[j]]++;}
        }
        if(temp==mp){return true;}
        for(int i=s1.size();i<s2.size();i++){
            char c=s2[i];
            char p=s2[i-s1.size()];
            if(mp.count(c)){temp[c]++;}
            if(mp.count(p)){temp[p]--;}
            if(temp==mp){return true;}
        }
        return false;
    }
};
