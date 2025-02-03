class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int  slow=0;
        int fast= height.size()-1;
        while(slow<fast)
        {
            area=max(area,(fast-slow)*min(height[slow],height[fast]));
            height[slow]<height[fast]? slow++ : fast--;
        }
        return area;
    }
};