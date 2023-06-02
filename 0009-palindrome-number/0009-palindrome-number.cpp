///////////////////////  SOLUTION 1  ///////////////////////

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string s = to_string(x);
//         string t = s;
//         reverse(t.begin(), t.end());
//         return s == t;
//     }
// };

// BOTH THE SOLUTIONS WORK PERFECTLY FINE


///////////////////////   SOLUTION 2   ///////////////////////

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;
        int sum = 0;
        while (x > sum)
        {
            sum = sum * 10 + x % 10;
            x = x / 10;
        }
        return (x == sum) || (x == sum / 10);
    }
};
