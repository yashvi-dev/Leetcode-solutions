#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        // for accesing individual word and them making them again reverse
        string word = "";
        // to store the final ans
        string ans = "";

        int n = s.length();
        for (int i = 0; i < n; i++) {
            // start with empty word for this iteration
            word.clear();

            // collect characters of the next word (stop at space or end)
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            if (!word.empty()) {
                // reverse characters of the collected chunk to restore word order
                reverse(word.begin(), word.end());

                // append with single space between words
                if (!ans.empty()) ans += ' ';
                ans += word;
            }

            // the for-loop will do i++ at the end, so no extra action needed
            // (if we stopped because of a space, the for's i++ moves past it)
        }
        return ans;
    }
};
