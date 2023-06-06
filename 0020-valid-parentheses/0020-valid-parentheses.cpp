class Solution
{
public:
    unordered_map<char, char> m = {{')', '('}, {'}', '{'}, {']', '['}};

    bool isValid(string s)
    {

        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {

            if (!st.empty() && ((s[i] == ')' && st.top() != '(') || (s[i] == '}' && st.top() != '{') || (s[i] == ']' && st.top() != '[')))
            {
                return false;
            }

            else if (!st.empty() && ((s[i] == ')' || s[i] == '}' || s[i] == ']') && st.top() == m[s[i]]))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        return st.empty();
    }
};