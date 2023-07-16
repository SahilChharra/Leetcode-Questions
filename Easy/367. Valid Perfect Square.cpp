class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num==0 || num==1){
            return num;
        }
        
        for(long long i=0;i<num;i++){
            if(i*i==num){
                return true;
            }
        }

        return false;
    }
};