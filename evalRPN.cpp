class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int sum{0};
        int num{0};
        for(string s:tokens){
            if(s=="+"){
                num=st.top();
                st.pop();
                sum=st.top()+num;
                st.pop();
                st.push(sum);
            }else if(s=="-"){
                num=st.top();
                st.pop();
                sum=st.top()-num;
                st.pop();
                st.push(sum);
                
            }else if(s=="/"){
                num=st.top();
                st.pop();
                sum=st.top()/num;
                st.pop();
                st.push(sum);
            }else if(s=="*"){
                num=st.top();
                st.pop();
                sum=st.top()*num;
                st.pop();
                st.push(sum);
            }else{
                num=stoi(s);
                st.push(num);
            }
        }
        return st.top();
    }
};
