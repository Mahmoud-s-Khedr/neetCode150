/**********************************
*to solve this problem we will use the same
*sorting idea to generate a key 
*we will group the vector by the key in a map
**********************************/
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string ,vector<string>>mp;
        vector<vector<string>> groups;
        for(int i=0; i<strs.size(); i++){
            string word = strs[i];
            sort(word.begin(), word.end());           
            mp[word].push_back(strs[i]);
        }
        for(auto it:mp){
            groups.push_back(it.second);
        }
        return groups;
    }
