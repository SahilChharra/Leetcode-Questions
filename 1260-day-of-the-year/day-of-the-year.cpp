class Solution {
public:
    int dayOfYear(string data) {
        int dy[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int y = stoi(data.substr(0,4));
        int m = stoi(data.substr(5,2));
        int d = stoi(data.substr(8));
        int ans=0;
        int temp=m;
        temp--;

        if((((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) && (m>=3) ){
            ans+=1;
        }

        while(temp!=0){
            if(temp==0){
                break;
            }
            else if(temp==1){
                ans+=dy[temp-1];
                temp--;
            }
            else if(temp==2){
                ans+=dy[temp-1];
                temp--;
            }
            else if(temp==3){
                ans+=dy[temp-1];
                temp--;
            }
            else if(temp==4){
                ans+=dy[temp-1];
                temp--;
            }
            else if(temp==5){
                ans+=dy[temp-1];
                temp--;
            }
            else if(temp==6){
                ans+=dy[temp-1];
                temp--;
            }
            else if(temp==7){
                ans+=dy[temp-1];
                temp--;
            }
            else if(temp==8){
                ans+=dy[temp-1];
                temp--;
            }
            else if(temp==9){
                ans+=dy[temp-1];
                temp--;
            }
            else if(temp==10){
                ans+=dy[temp-1];
                temp--;
            }
            else if(temp==11){
                ans+=dy[temp-1];
                temp--;
            }
        }

        ans+=d;
        return ans;
    }
};