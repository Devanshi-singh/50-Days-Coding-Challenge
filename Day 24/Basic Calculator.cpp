class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        st.push(1);
        int ans=0;
        int sum=0;
        int sign=1;
        for(auto u:s){
            if(u>='0'&&u<='9'){
                sum=sum*10+(u-'0');
            }
            else if(u=='('){
                st.push(sign);
            }
            else if(u==')'){
                st.pop();
            }
            else if(u=='+'||u=='-'){
                ans+=sum*sign;
                if(u=='+'){
                    sign=1*st.top();
                }
                else{
                    sign=(-1*st.top());
                }
                sum=0;
            }
        }
        ans+=sum*sign;
        return ans;
    }
};