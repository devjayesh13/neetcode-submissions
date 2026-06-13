class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size()-1, vol = 0;
        while(i < j){
            vol = max(min(heights[i], heights[j]) * (j-i), vol);
            if(heights[i] <= heights[j]) i++;
            else j--;
        }
        return vol;
    }
};
