class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count = 0;
        
        int l = nums.size();

        for (int i = 0; i < l; i++) {
            int temp = 0;
            for(;nums[i] != 0;){
                nums[i] /=10;
                temp++;
            }
            if(temp%2==0){
                count++;
            }
         
        }
        return count;
    }
};
