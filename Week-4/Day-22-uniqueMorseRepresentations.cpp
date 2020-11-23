class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> st;
        for(string str : words) {
            string t = "";
            for(char c : str) {
                t += morse[c-'a'];
            }
            st.insert(t);
        }
        return st.size();
    }
};
