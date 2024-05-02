/***
not fast nor efficient but i am proud; 

*******/

class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() <= 2) {
            return 0;
        }
        int maxindex = 0;
        for (int i = 1; i < height.size(); i++) {
            if (height[i] > height[maxindex]) {
                maxindex = i;
            }
        }

        int ptr = maxindex;
        stack<int> st;
        int cnt = 0;
        st.push(height[maxindex]);
        ptr--;
        while (ptr >= 0) {
            int count = 0;
            while (st.top() < height[ptr]) {
                cnt += height[ptr] - st.top();
                count++;
                
                st.pop();
            }
            for (int i = 0; i < count; i++) {
                st.push(height[ptr]);
            }
            st.push(height[ptr]);
            ptr--;
        }

        ptr = maxindex;
        st.push(height[maxindex]);
        ptr++;
        while (ptr < height.size()) {
            int count = 0;
            while (st.top() < height[ptr]) {
                cnt += height[ptr] - st.top();
                count++;
                
                st.pop();
            }
            for (int i = 0; i < count; i++) {
                st.push(height[ptr]);
            }
            st.push(height[ptr]);
            ptr++;
        }
        return cnt;
    }
};
