class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> d;

        for(char c : magazine){
            if(d.find(c) == d.end()){
                d[c]=1;
            }
            else{
                d[c]++;
            }
        }

        for(char c : ransomNote){
            if(d.find(c)!=d.end() && d[c]>0){
                d[c]--;
            }
            else{
                return false;
            }
        }

        return true;
    }
};