class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>lower(26,-1);
        vector<int>upper(26,-1);
        int count=0;
        for(int i=0;i<word.length();i++){
            char ch=word[i];
            if(islower(ch)){
                lower[ch-'a']=i;
            }else{
                int idx=ch-'A';
                if(upper[idx]==-1){
                    upper[idx]=i;
                }
            }
        }
        for(int i=0;i<26;i++){
            if(lower[i]!=-1 && upper[i]!=-1 && lower[i]<upper[i]){
                count++;
            }
        }
        return count;
    }
};