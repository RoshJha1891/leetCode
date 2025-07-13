class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int max = 0;
        max = nums.size() ;
        int sum= (max * ( max +1))/2;
        int sum2=0 ;
        for(const int num :nums){
         sum2 = sum2 + num ; 
        }

    if(sum2 == sum){
        return 0;
    }
            
    

    int i = sum-sum2; 

    return i;
 }
};