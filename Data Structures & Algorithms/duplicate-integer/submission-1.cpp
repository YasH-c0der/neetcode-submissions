class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n == 0 || n == 1){
            return false;
        }
        int prev = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(prev == nums[i]) return true;
            prev = nums[i];
        }
        return false;
    }
};