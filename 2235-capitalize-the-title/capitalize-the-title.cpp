class Solution {
public:
    string capitalizeTitle(string title) {
        string ans="";

        for(int i=0;i<title.length();++i){
            if(title[i]>='A' && title[i]<='Z'){
                ans+=tolower(title[i]);
            }
            else{
                ans+=title[i];
            }
        }

        int temp=0,itr=0;
        int first=0;

        while(itr<ans.length()){
            if(ans[itr]==' '){
                if(itr-temp>2){
                    ans[temp] = toupper(ans[temp]);
                }
                temp=itr+1;
            }
            itr++;
        }

        if(itr-temp>2){
            ans[temp] = toupper(ans[temp]);
        }

        return ans;
    }
};