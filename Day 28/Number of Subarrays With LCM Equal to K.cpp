class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int size=nums.size(),count=0;
        for(int i=0;i<size;i++){
        int LCM=nums[i];
            for(int j=i;j<size;j++){
                LCM=lcm(LCM,nums[j]);
                if(LCM==k)
                    count++;
                else if(LCM>k)
                    break;
            }
        }
        return count;
    }
};