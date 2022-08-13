class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxh=0;
        while(left<right)
        {
        int lefth=height[left];
        int righth=height[right];
        int minheight=min(lefth,righth);
        maxh=max(maxh,minheight*(right-left)); // updating max element
        if(lefth<righth) // updating the left and right element
            left++;
            else
                right--;
        }
        return maxh;
    }
};