class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a_value , b_value = 0;
        for (int i=0 ; i<nums.size();i ++){
            for (int j=i+1 ; j<nums.size();j++){
                if( nums[i]+nums[j]==target) {
                        a_value = i;
                        b_value = j;
                }
             }
        }
        
        return{a_value , b_value};
        
    }
};
