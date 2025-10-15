class Solution {
public:
    bool isPalindrome(int x) {

      long long pal = 0 ;
      long a = x  ;

      while( a > 0){

        pal = pal * 10 + a % 10 ;

        a = a / 10 ;

      } 

      if( pal == x){
        return true ;
      }
      else{
        return false ;
      }
      
    }
};