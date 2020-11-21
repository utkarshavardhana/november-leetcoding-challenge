class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty())   return vector<vector<int>> ();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res = {intervals[0]};
        for(int i=1; i<intervals.size(); i++) {
            if(intervals[i][0] <= res.back()[1])    res.back()[1] = max(res.back()[1], intervals[i][1]);
            else    res.push_back(intervals[i]);
        }
        return res;
    }
};
