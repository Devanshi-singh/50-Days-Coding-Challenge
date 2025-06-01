class Solution {
public:
    int getnum(int num){
        if(num >= 0 && num <=9){
            return num;
        }
        int newNum = 0;
        while(num){
            int d = num%10;
            newNum += d;
            num /= 10;
        }
        return getnum(newNum);
    }
    int addDigits(int num) {
        
        int res = getnum(num);
        return res;
    }
};