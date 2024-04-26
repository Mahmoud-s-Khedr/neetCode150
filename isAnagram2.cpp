    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){return false;}
        map<char,int>mpt;
        map<char,int>mps;
        for(int i=0;i<s.size();i++){
            mps[s[i]]++;
            mpt[t[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(mpt[s[i]]!=mps[s[i]]){
                return false;
            }
        }
        return true;
    }
