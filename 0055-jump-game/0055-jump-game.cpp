class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lim = nums[0]; int curr = lim;
        int n = nums.size();
        for(int i = 1;i<n;i++){
            if(lim<i){
                return false;
            }
            lim = max(lim,nums[i]+i);
        }
        return true;
    }    
};