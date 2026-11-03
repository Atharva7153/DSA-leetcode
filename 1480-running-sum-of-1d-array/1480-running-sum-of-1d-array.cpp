class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int n = nums.size();
        vector<int>ans;

        for(int i = 0; i < n; i++){
            if(i == 0){
                int x = nums[i];
                ans.push_back(x);
            }
            else{
                int x = nums[i] + ans[i-1];
                ans.push_back(x);
            }
            
        }
        return ans;
        
    }
};