class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        int windowStart = 0;
        map<char, int> chars;
        for (int windowEnd = 0; windowEnd < s.length(); windowEnd++) {
            chars[s[windowEnd]] += 1;
            while (chars[s[windowEnd]] > 1) {
                chars[s[windowStart]]--;
                windowStart++;
            }
            maxLength = max(maxLength, windowEnd - windowStart + 1);
        }
        return maxLength;
    }
};
"
