class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long volume = (long long)length*(long long)width*(long long)height;
        int bulky_flag=-1;
        int heavy_flag=-1;
        string ans;
        if(mass>=100){
            heavy_flag=1;
        }

        long long check_volume = pow(10,9);
        int dim_check = pow(10,4);

        if(length >= dim_check || width >= dim_check || height >= dim_check || 
        volume >= check_volume){
            bulky_flag=1;
        }

        if(bulky_flag==1 && heavy_flag==1){
            ans = "Both";
        }
        else if(bulky_flag==1 && heavy_flag!=1){
            ans = "Bulky";
        }
        else if(bulky_flag!=1 && heavy_flag==1){
            ans = "Heavy";
        }
        else{
            ans = "Neither";
        }

        return ans;
    }
};