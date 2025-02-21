class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int maxWater=0;
        while(i<j){
            maxWater=max(maxWater,(min(height[i],height[j])*(j-i)));
            height[i]<height[j] ? i++:j--;
            

        }
        return maxWater;
    }
};