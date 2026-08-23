class Solution {
public:
    int findMin(vector<int> &nums) {
        int low = 0;
        int high = nums.size()-1;
        int res = INT_MAX;
        while(low<=high){
            int mid = low + (high-low)/2;
            res = min(res, nums[mid]);
            if(nums[low]>nums[high]){
                if(nums[mid]>=nums[low]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
            else{
                res = min(res, nums[low]);
                break;
            }
        }
        return res;
    }
};
