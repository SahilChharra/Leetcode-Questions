class Solution {
public:
    string toLowerCase(string s) {
        int n = s.length();

        for(int i=0;i<n;i++){
            if('A' <= s[i] && s[i] <= 'Z'){
                s[i]+=32;
            }
        }

        return s;
    }
};