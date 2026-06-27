class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int cnt=0;
       int i=n-1;
        for(;i>=0;i--){
            if(s[i]!= ' '){
                break;
            }
        }
        for(;i>=0;i--){
            if(s[i]== ' '){
                break;
            }else{
                cnt++;
            }
        }
        return cnt;
    }
};