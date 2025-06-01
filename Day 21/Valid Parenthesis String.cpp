class Solution {
public:
    bool checkValidString(string s) {
        stack <char>st1;
        stack<char>st2;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'){
                st1.push(i);
            }else if(s[i]=='('){
                st2.push(i);
            }else{
                if(st2.empty()==false){
                    st2.pop();
                }else if(st1.empty()==false){
                    st1.pop();
                }else{
                    return false;
                }
                }
            }
        while(st1.empty()==false && st2.empty()==false){
            if(st2.top()<st1.top()){
                st1.pop();
                st2.pop();
            }else{
                return false;
            }
        }
    if(st2.empty()==true){
            return true;
    }
    return false;
    }
};