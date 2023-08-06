class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0;
        int n = bills.size();
        int flag=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                five++;
            }
            if(bills[i]==10){
                ten++;
                if(five>0){
                    five--;
                }
                else{
                    flag=1;
                }
            }

            if(bills[i]==20){
                if(five>0){
                    if(ten>0){
                        five--;
                        ten--;
                    }
                    else if(five>=3){
                        five-=3;
                    }
                    else{
                        flag=1;
                    }
                }
                else{
                    flag=1;
                }
            }
        }

        if(flag==1){
            return false;
        }
        else{
            return true;
        }
    }
};