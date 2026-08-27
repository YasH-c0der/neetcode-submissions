class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int area = 0;
        while(i<j){
            int temp = (j-i)*min(heights[i], heights[j]);
            area = max(area, temp);
            if(heights[j]<heights[i]) j--;
            else i++;
        }
        return area;
    }
};