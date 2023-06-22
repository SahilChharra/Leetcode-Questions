class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> st; 
        for(int i=0;i<n;i++){
            char ch = s[i];
            if(ch=='(' || ch=='{' || ch=='[' ){
                st.push(ch);
            }
            else{
                if (!st.empty())
                {
                    char top = st.top() ;
                    if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')) 
                        {
                            st.pop() ;
                        }
                        else 
                        {
                            return false ; 
                        }
                }
                else 
                {
                    return false ;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};