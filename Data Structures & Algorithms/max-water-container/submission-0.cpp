class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_water = 0;
        int curr_water = 0;
        int i = 0;
        int j = size(heights) - 1;

        while (i<j){
            curr_water = (j-i) * (min(heights[i], heights[j]));
            max_water = max(curr_water, max_water);

            if (heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }

        return max_water;
        
    }
}; 
