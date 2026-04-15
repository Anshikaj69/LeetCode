class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int i = s.length() - 1;

        while (i >= 0) {
            // skip spaces
            while (i >= 0 && s[i] == ' ') i--;

            if (i < 0) break;

            int j = i;

            // find word
            while (j >= 0 && s[j] != ' ') j--;

            // add word
            if (!result.empty()) result += " ";
            result += s.substr(j + 1, i - j);

            i = j - 1;
        }

        return result;
    }
};