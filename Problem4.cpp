class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x = 0;
        for (int i = 0; i < nums.size(); i++) {
            x = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++) {

                if (x == nums[j]) {

                    return {i, j};
                }
            }
        }
        return {};
    }
};
