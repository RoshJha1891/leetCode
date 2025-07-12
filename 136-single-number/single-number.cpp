class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int const num:nums){
        ans=ans^num;
        }
    return ans;



    
    }
};