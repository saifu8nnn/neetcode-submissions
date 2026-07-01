class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0;
        int j=n-1;
        int res=0;
        while(i<j){
            int minimum=min(heights[i],heights[j]);
            int capacity=minimum*(j-i);
            res=max(res,capacity);
            if(i<j && minimum==heights[i]){
                i++;
            }
            else if(i<j && minimum==heights[j]){
                j--;
            }
        }
        return res;
    }
};