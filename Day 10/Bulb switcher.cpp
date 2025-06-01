class Solution {
public:
    int bulbSwitch(int n) {
        long long i = 1;
        int ans = 0;
        while ((i*i)<=n) {
            i++; ans++;
        }
        return ans;
    }
};