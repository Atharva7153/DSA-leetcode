class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCon = 0;
        int cons = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                cons++;
            }
            else{
                cons = 0;
                
            }
            if(cons > maxCon){
                    maxCon = cons;
                }
        }
        return maxCon;
    }
};