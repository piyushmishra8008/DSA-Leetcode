class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>mp(word.begin(),word.end());
        int count=0;
        for(int ch='a';ch<='z';ch++){
            if(mp.count(ch) && mp.count(ch-32)){
                count++;
            }
        }
        return count;
    }
};