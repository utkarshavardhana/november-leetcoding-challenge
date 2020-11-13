class Solution {
public:
    void _permute(vector<int> nums, int n, vector<int> temp, set<vector<int>>& res) {
        if(temp.size() == n) {
            res.insert(temp);
            return;
        }
        for(int i=0; i<nums.size(); i++) {
            int x = nums[i];
            temp.push_back(x);
            nums.erase(nums.begin()+i);
            _permute(nums, n, temp, res);
            nums.insert(nums.begin()+i, x);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> res;
        vector<int> temp;
        _permute(nums, n, temp, res);
        vector<vector<int>> ret;
        for (vector v : res) {
            ret.push_back(v);
        }
        return ret;
    }
};
