class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                peak=i+1;
            }
        }
        return peak;
    }
};