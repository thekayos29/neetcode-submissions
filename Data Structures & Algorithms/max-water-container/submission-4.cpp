class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int max_w=0;
        int left=0;
        int right=n-1;
        while(left<right){
            int width= right - left;
            int height = min(heights[right],heights[left]);
            max_w=max(height*width,max_w);

            if(heights[right]>heights[left]){
                left++;
            }
            else{
                right--;
            }


        }
    return max_w;
    }
};
