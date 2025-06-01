class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans = "";
        stack<char> st;
        int cnt = 0;
        for (auto ch : s){
            if (ch=='('){
                cnt++;
                st.push(ch);
            } else if (ch==')') {
                if (cnt){
                    st.push(ch);
                    cnt--;
                } 
            } else st.push(ch);
        }
        while (!st.empty()){
            char ch = st.top();
            st.pop();
            if (ch=='(' && cnt>0){
                cnt--;
            } else ans+=ch;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};