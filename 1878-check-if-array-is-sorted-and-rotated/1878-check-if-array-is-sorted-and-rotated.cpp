class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>sorted=nums;
        sort(begin(sorted),end(sorted));
        for(int r=0;r<nums.size();r++){
        bool isvalue=true;
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=sorted[(r+i)%nums.size()]){
                    isvalue=false;
                    break;
                }
            }
        if(isvalue==true){
            return true;
        }
        }
       
            return false;
        
    }
};