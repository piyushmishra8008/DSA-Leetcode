class Solution {
public:
    bool checkString(string s) {
        int peak=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>s[(i+1)]){
                peak++;
            }
        }
        return peak<=1;
    }
};