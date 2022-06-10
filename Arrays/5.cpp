class Solution {
public:
    void sortColors(vector<int>& nums) {
        int pt1 = 0; 
        int pt2 = nums.size()-1;
        int i = 0;
        while(i<=pt2){
            if(nums[i] == 0){
                swap(nums[i++] , nums[pt1++]);
            } else {
                if(nums[i] == 2){
                    swap(nums[i] , nums[pt2--]);
                }
                else
                    i++;
            }
        }
    }
};