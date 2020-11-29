class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        if(k > nums.size()) return res;
        map<int, int> m;
        for(int i=0; i<k; i++)  m[nums[i]]++;
        res.push_back((*m.rbegin()).first);
        for(int i=k; i<nums.size(); i++) {
            m[nums[i]]++;
            m[nums[i-k]]--;
            if(nums[i-k] == 0)  m.erase(nums[i-k]);
            while(m.rbegin()->second == 0)  m.erase(m.rbegin()->first);
            res.push_back((*m.rbegin()).first);
        }
        return res;
    }
};
