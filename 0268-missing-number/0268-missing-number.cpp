class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        int c_ans = 0;

        for(int i = 0; i < nums.size(); i++){
            ans = ans ^ nums[i];
            c_ans = c_ans ^ i;
        }

        c_ans = c_ans ^ nums.size();

        return ans ^ c_ans;
    }
};