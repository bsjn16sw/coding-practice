// March 10, 2020

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)   return false;
        else if(x == 0) return true;
        
        int org = x, rev = 0;
        while(x > 0){
            if(rev > INT_MAX / 10 || (rev == INT_MAX / 10 && x % 10 > 7))
                return false;
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        
        if(org == rev)  return true;
        else    return false;
    }

    /* Old solution: April 7, 2019
    bool isPalindrome(int x) {
        if(x < 0)   return false;
        else if(x == 0) return true;
        
        string org = to_string(x);
        string rev(org);
        reverse(rev.begin(), rev.end());
        
        if(!org.compare(rev))   return true;
        else    return false;
    }
    */
};
