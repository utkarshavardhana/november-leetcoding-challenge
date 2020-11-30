class Solution {
public:
    bool canReach(vector<int>& a, int start) {
        vector<int> arr = a;
        do {
            a = arr;
            for(int i=0; i<arr.size(); i++) {
                if(i-arr[i] >= 0 and arr[i-arr[i]] == 0)    arr[i] = 0;
                if(i+arr[i] < arr.size() and arr[i+arr[i]] == 0)    arr[i] = 0;
            }
        } while(arr != a);
        return !arr[start];
    }
};
