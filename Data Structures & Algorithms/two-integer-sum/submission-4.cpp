class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, vector<int>> mpp;
        for(int i = 0; i<nums.size(); i++){

            mpp[nums[i]].push_back(i);
        }
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size()-1;
        vector <int> res(2, 0);
        while(i<=j){
            int sum = nums[i] + nums[j];
            if(sum == target){
                res[0] = min(mpp[nums[i]][0], mpp[nums[j]][0]);
                res[1] = max(mpp[nums[i]][0], mpp[nums[j]][0]);

                if(nums[i] == nums[j]) res[1] = mpp[nums[j]][1];
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
