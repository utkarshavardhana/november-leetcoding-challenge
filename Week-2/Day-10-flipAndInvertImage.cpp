class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(vector<int> &v : A) {
            reverse(v.begin(), v.end());
            for(int &i : v) {
                i = (i+1) % 2;
            }
        }
        return A;
    }
};
