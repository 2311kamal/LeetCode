

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        unordered_map<char, int> m;
        int len = 0,n=s.length();
        for (int r = 0, l = 0; r < n; r++)
        {

            if (m.find(s[r]) != m.end())
                l=max( m[s[r]] + 1, l);
            m[s[r]] = r;
            len = max(len, r - l + 1);
        }
        return len;
    }
};

// class Solution {
// public:
//    int lengthOfLongestSubstring(string s) {
//         vector<int> dict(256, -1);
//         int maxLen = 0, start = -1;
//         for (int i = 0; i != s.length(); i++) {
//             if (dict[s[i]] > start)
//                 start = dict[s[i]];
//             dict[s[i]] = i;
//             maxLen = max(maxLen, i - start);
//         }
//         return maxLen;
//     }
// };