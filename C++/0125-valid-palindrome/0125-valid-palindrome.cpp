class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int st = 0;
        int ed = n-1;
        while(st < ed)
        {
            while(st < ed && !isalnum(s[st]))
                st++;
            while(st < ed && !isalnum(s[ed]))
                ed--;
            if(tolower(s[st]) == tolower(s[ed]))
            {
                st++; ed--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};