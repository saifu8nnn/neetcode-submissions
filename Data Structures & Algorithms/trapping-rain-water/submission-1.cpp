class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int quantity=0;
        int n=height.size();
        vector<int> left_max(n);
        vector<int> right_max(n);
        left_max[0]=0;
        int l_max=height[0];
        for(int i=1;i<n;i++){
            if(height[i]>l_max){
                l_max=height[i];
                left_max[i]=l_max;
            }
            else left_max[i]=l_max;
        }
        int r_max=height[n-1];
        right_max[n-1]=r_max;
        for(int i=n-1;i>=0;i--){
            if(height[i]>r_max){
                r_max=height[i];
                right_max[i]=r_max;
            }
            else right_max[i]=r_max;
        }
       
        
        for(int i=0;i<n;i++){
            water=min(left_max[i],right_max[i])-height[i];
            if(water>0){
                quantity+=water;
            }
        }
    return quantity;
    }
};
