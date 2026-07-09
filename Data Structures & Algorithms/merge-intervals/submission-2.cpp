class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> output;
        output.push_back(intervals[0]);

        for(auto& intv : intervals){
            int start = intv[0];
            int end = intv[1];
            int lastend = output.back()[1];

            if(start <= lastend) output.back()[1] = max(lastend, end);
            else output.push_back({start, end});
        }
        return output;
    }
};
