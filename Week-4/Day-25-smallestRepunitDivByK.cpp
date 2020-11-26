class Solution {
public:
    int smallestRepunitDivByK(int K) {
        if(K%2==0) {
            return -1;
        }
        if(K%5==0) {
            return -1;
        }
        long long int ans = 1;
        long long int s = 1, d = 10 % K , p=1;
        while(true) {
            if(s%K==0) {
                return ans;
            }
            p = (p*d)%K;
            s += p;
            ans++;
        }
        return -1;
    }
};
