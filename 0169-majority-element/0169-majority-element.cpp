class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //Moore's aglo
        int candidate = nums[0];
        int can_vote = 0;

        for (int i = 0; i < nums.size(); i++){
            if(can_vote <= 0){
                candidate = nums[i];
                can_vote = 0;
            }
            
            if(nums[i] == candidate){
                can_vote++;
            }else{
                can_vote--;
            }
        }

        return candidate;
    }
};