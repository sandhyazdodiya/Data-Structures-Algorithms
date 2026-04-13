class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i = 0;
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
         
        while(i < size(nums)-2){
            if (i>0 && nums[i] == nums[i-1]) {
                i++;
                continue;
            }
            int target = -nums[i];
            int j = i + 1;
            int k = size(nums)-1;

            while(j<k) {
                int curr_sum = nums[j] + nums[k];
                if(curr_sum == target){
                    result.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1])  j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }else if(curr_sum < target){
                    j++;
                }
                else{
                    k--;
                }
            }
            i++;


        }

    return result;

    }
};