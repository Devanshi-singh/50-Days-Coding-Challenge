class Solution {
public:
    int first(vector<int>& nums, int target){
        int low=0, high=nums.size()-1, ans;
        while (low<=high){
            int mid = low + (high-low)/2;
            if (nums[mid]>=target){
                high = mid-1;
            } else {
                low = mid+1;
            }
        }
        return low;
    }
    int last(vector<int>& nums, int target){
        int low=0, high=nums.size()-1;
        while (low<=high){
            int mid = low + (high-low)/2;
            if (nums[mid]>target){
                high = mid-1;
            } else {
                low = mid+1;
            }
        }
        return low;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = first(nums, target);
        if (lb==nums.size() || nums[lb]!=target) return {-1,-1};
        return {lb, last(nums, target)-1};
    }
};