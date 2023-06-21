class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            long long int reverse=0, rem;
            long long int n = x;        
            while(n!=0)    
            {    
                rem=n%10;      
                reverse=reverse*10+rem;    
                n/=10;    
            }
            if(x == reverse){
                return true;
            }
            else{
                return false;
            }
        }     
    }
};