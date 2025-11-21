class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxi=0;
        for(int val:arr){
            maxi=max(maxi,val);
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==maxi){
                return i;
            }
        }
        return -1;
    }
};