class Solution {
public:
    string largestOddNumber(string num) {
        string maxc = " ";
        int maxi = -1;
        for(int i=0 ; i< num.size(); i++){
            if (num[i] == 49 || num[i] == 51 || num[i] == 53 || num[i] == 55 || num[i] == 57){
               maxi = i;
            }
        }
             maxc = num.substr(0, maxi+1);

        
        return maxc;
    }
};