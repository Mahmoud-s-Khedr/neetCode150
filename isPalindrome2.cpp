class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0, ed = s.size() - 1;
        while (st < ed) {
            if ((s[st] >= 'a' && s[st] <= 'z' || s[st] >= 'A' && s[st] <= 'Z'||s[st] >='0' && s[st] <= '9') 
            &&  (s[ed] >= 'a' && s[ed] <= 'z' || s[ed] >= 'A' && s[ed] <= 'Z'||s[ed] >='0' && s[ed] <= '9'))
                    {
                if(s[st] >= 'A' && s[st] <= 'Z'){
                    s[st]+='a'-'A';
                }
                if(s[ed] >= 'A' && s[ed] <= 'Z'){
                    s[ed]+='a'-'A';
                }
                if(s[ed]!=s[st]){
                    return false;
                }else{
                    ed--;
                    st++;
                }
            }
            if(!(s[st] >= 'a' && s[st] <= 'z' || s[st] >= 'A' && s[st] <= 'Z'||s[st] >='0' && s[st] <= '9')){
                st++;
            }
            if(!(s[ed] >= 'a' && s[ed] <= 'z' || s[ed] >= 'A' && s[ed] <= 'Z'||s[ed] >='0' && s[ed] <= '9')){
                ed--;
            }
        }
        return true;
    }
};
