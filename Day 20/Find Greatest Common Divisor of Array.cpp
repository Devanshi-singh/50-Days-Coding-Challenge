#include <algorithm>
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = *min_element(nums.begin() , nums.end());
        int maxi = *max_element(nums.begin() , nums.end());
        while(min(mini , maxi) != 0){
            if(maxi < mini) mini = mini % maxi;
            else  maxi = maxi % mini;  
        }
        return max(mini , maxi);
    }
};