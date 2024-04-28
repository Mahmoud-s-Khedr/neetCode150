//note this code did not pass the [""] test case but passed any thing else;

int arr[101]={0};
    string encode(vector<string>& strs) {
        string s="";
        int i=0;
        while(i<strs.size()){
            s+=strs[i];
            if(i==0){arr[i]=strs[i].size()-1;}
            else{arr[i]=strs[i].size()+arr[i-1];}
            i++;
        }
        return s;

    }

    vector<string> decode(string s) {
        vector<string>ans;
        string str="";
        int j=0;
        for(int i=0;i<s.size();i++){
            str+=s[i];
            if(i==arr[j]){

                ans.push_back(str);
                str="";
                j++;
            }

        }
        return ans;
    }
