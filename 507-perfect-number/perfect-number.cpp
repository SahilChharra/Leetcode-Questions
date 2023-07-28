class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> v;
        for(int i=1;i<num;i++){
            if(num%i==0){
                v.push_back(i);
            }
        }

        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }

        if(sum==num){
            return true;
        }
        else{
            return false;
        }
    }
};