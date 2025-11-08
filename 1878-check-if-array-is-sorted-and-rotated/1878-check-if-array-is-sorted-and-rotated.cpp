class Solution {
public:
    bool check(vector<int>& nums) {
       for(int r=0;r<nums.size();r++){
       vector<int>arr;
       for(int i=r;i<nums.size();i++){
        arr.push_back(nums[i]);
       } 
        for(int k=0;k<r;k++){
        arr.push_back(nums[k]);
       } 
       bool isvalue=true;
       for(int m=0;m<nums.size()-1;m++){
        if(arr[m]>arr[m+1]){
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