class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
      unordered_set<char>s1(jewels.begin(),jewels.end());
      
     int count=0;
      for(char c:stones){
        if(s1.find(c)!=s1.end()){
            count+=1;
        }
      }
        
      return count;
    }
};