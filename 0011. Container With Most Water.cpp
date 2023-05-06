class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area=0;
        int s = 0;
        int e = n-1;
        while(s<e){
            int h = min(height[s],height[e]);
            area = max(area,h*(e-s));
            if(height[s]<height[e]) s++;
            else{
                e--;
            }
        }
        return area;
    }
};
