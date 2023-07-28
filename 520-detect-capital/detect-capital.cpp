class Solution {
public:
    bool detectCapitalUse(string word) {
        vector<char> small;
        vector<char> cap;
        int n = word.length();

        for(int i=0;i<n;i++){
            if('a'<= word[i] && word[i] <= 'z'){
                small.push_back(word[i]);
            }
            if('A'<= word[i] && word[i] <= 'Z'){
                cap.push_back(word[i]);
            }
        }

        if(cap.size()==1 && ('A'<= word[0] && word[0] <= 'Z')){
            return true;
        }

        if(small.size() == n){
            return true;
        }

        if(cap.size() == n){
            return true;
        }

        return false;
    }
};