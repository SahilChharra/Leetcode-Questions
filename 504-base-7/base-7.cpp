class Solution {
public:
    string convertToBase7(int num) {
        if(num==0){
            return "0";
        }

        string ans = "";
        bool check = false;

        if(num<0){
            check = true;
            num=num*-1;
        }

        while(num>0){
            ans+=to_string(num%7);
            num=num/7;
        }

        if(check){
            ans+='-';
            check = false;
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};