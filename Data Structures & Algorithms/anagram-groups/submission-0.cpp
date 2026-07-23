class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, int> mpp;
        int count = 0;
        for(int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if(mpp.find(temp) == mpp.end()){
                mpp[temp] = count;
                vector<string> str;
                str.push_back(strs[i]);
                res.push_back(str);
                count++;
            }
            else{
                res[mpp[temp]].push_back(strs[i]);
            }
        }
        return res;
    }
};
