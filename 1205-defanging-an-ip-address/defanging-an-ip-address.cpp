class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.length();
        vector<char> v;
        for(int i=0;i<n;i++){
            if(address[i]=='.'){
                v.push_back('[');
                v.push_back('.');
                v.push_back(']');
            }
            else{
                v.push_back(address[i]);
            }
        }
        string ans="";
        for(int i=0;i<v.size();i++){
            ans+=v[i];
        }

        return ans;
    }
};