class Solution {
public:
    int maxArea(vector<int>& height) {
        int right=height.size()-1;
        int left=0;
        int maxi=0;
        int width=0,length=0;
        int area=0;
        while(left<right){
            width=right-left;
            length=min(height[right],height[left]);
            area=width*length;
            maxi=max(maxi,area);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxi;
    }
};