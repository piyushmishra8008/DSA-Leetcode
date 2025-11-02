class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>arr;
        int count=0;
        int count1=0;
        int count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else if(nums[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        int i=0;
        for(int j=0;j<count;j++){
            nums[i]=0;
            i++;
        }
        for(int j=0;j<count1;j++){
            nums[i]=1;
            i++;
        }
        for(int j=0;j<count2;j++){
            nums[i]=2;
            i++;
        }
    }
};