class Solution {
public:
    void sortColors(vector<int>& nums) {

        int zero = 0;
        int one = 0;
        int two = 0;

        for(int i = 0 ; i < nums.size() ;i++)
        {
            if(nums[i] == 0){
                zero++;
            }
            if(nums[i] == 1){
                one++ ;
            }
        }

        two = nums.size() - (zero + one);

        for(int i = 0 ; i < nums.size() ; i++){
            if(zero != 0){
                nums[i] = 0;
                zero = zero - 1 ; 
            }
            else if(one != 0){
                nums[i] = 1 ;
                one = one - 1 ;
            }
            else{
                nums[i] = 2;
            }
        }
        
    }
};