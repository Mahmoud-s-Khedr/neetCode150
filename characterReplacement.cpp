class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int st = 0;
        int maxlen = 0;
        int result = 0;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            maxlen = max(maxlen, mp[s[i]]);
            if (i - st + 1 - maxlen > k) {
                mp[s[st]]--;
                st++;
            } else {
                result = max(result, i - st + 1);
            }
        }
        return result;
    }
};
