class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                    st.push(s[i]);
                    count++;
            }
            else if (count == 0){ return false;}
            else if(s[i]==')'&& count>=1 && st.top()=='('){
              
                st.pop();
                count--;
                
            }
             else if(s[i]=='}' && count>=1 && st.top()=='{'){
                
                st.pop();
                count--;
                
            }
             else if(s[i]==']' && count>=1 && st.top()=='['){
              
                st.pop();
                count--;
            
             }
            else {
                return false;
                break;
            }
        }
    
        if(count==0){
        return true;
        }
        else{
            return false;
        }
    }
};