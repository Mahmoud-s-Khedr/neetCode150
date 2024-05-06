class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char ch : s){
            if(ch=='{'||ch=='('||ch=='['){
                st.push(ch);
            }else {
                if(st.empty()){
                  return false;
                }
                if(ch-1==st.top()||ch-2==st.top()){
                    st.pop();
                }else{
                    return false;
                }
            
            }
        }
        
        return st.empty();
    }
};
