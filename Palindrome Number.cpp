class Solution {
public:
    bool isPalindrome(int x) {
        
       if(x<0 || (x % 10 == 0 && x!= 0))
       {
        return false;
       }
       int reverseno = 0;
       while(x>reverseno)
       {
        reverseno = reverseno * 10 + x % 10;
        x = x/10;
       }
       return x == reverseno || x == reverseno/10;
    }
};
