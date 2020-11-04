class Solution {
public:
    int maxPower(string s) {
        int res = 1, count = 1;
        for(int i=1; i<s.size(); i++) {
            if(s[i] == s[i-1]) {
                count++;
                res = max(res, count);
            } else  count = 1;
        }
        return s.empty() ? 0 : res;
    }
};
