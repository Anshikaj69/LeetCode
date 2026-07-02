class Solution {
public:
    int lengthOfLongestSubstring(string s) {

     unordered_map< char ,int> freq(0);   
     int longest =0, curr_len=0, l=0;

     for(int r=0; r < s.size(); r++){
        freq[s[r]]++;

        while(freq[s[r]] > 1){
            freq[s[l]]--;
            if(freq[s[l]] == 0){freq.erase(s[l]);}
            l++;

        }

         longest= max(longest, r-l+1);
     }

     return longest;
    }
};