class Solution {
public:
    bool isPowerOfTwo(int n) {
        string ans = decimalToBinary(n);
        int len = ans.length();
        int c=0;
        for(int i=0;i<len;i++){
            if(ans[i]=='1'){
                c+=1;
            }
        }

        if(c==1){
            return true;
        }
        else{
            return false;
        }
    }

    string decimalToBinary(int n)
    {
        string s = bitset<64> (n).to_string();
        const auto loc1 = s.find('1'); 
        if(loc1 != string::npos)
            return s.substr(loc1);
     
        return "0";
    }
};