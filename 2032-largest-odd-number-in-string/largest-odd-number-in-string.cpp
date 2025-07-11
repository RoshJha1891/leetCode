class Solution {
public:
    string largestOddNumber(string num) {
       
       string ans = num ;

       for(int i = ans.length()-1; i >= 0;i--)
       {
        int temp = ans[i] ;

        if(temp%2 != 0){
            return ans;
        }

        ans.pop_back();
       }

       return ans ;
        
    }
};