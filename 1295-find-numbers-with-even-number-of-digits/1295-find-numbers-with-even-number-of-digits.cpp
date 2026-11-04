class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even = 0;
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            int count = 0;

            if(n == 0){
                count = 1;
            }else{
                while(n > 0){
                    count++;
                    n = n/10;
                }
            }

            if(count % 2 == 0){
                even++;
            }
        }

        return even;
    }
};