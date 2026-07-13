class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;
        vector <int> res(2, 0);
        while(i<=j){
            int sum = nums[i] + nums[j];
            if(sum == target){
                res[0] = i;
                res[1] = j;
                return res;
            }
            else if(sum > target){
                j--;
            }
            else {
                i++;
            }
        }
        return res;
    }
};
