class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        int m = haystack.length(), n = needle.length();
        if (n == 0)
        {
            return 0;
        }
        vector<int> lps = filllps(needle);
        for (int i = 0, j = 0; i < m;)
        {
            if (haystack[i] == needle[j])
            {
                i++, j++;
            }
            if (j == n)
            {
                return i - j;
            }
            if (i < m && haystack[i] != needle[j])
            {

                if (j == 0)
                {
                    i++;
                }
                else
                {
                    j = lps[j - 1];
                }

                // j ? j = lps[j - 1] : i++;
            }
        }
        return -1;
    }

private:
    vector<int> filllps(string str)
    {

        int n = str.length();
        vector<int> lps(n, 0);

        int len = 0;

        for (int i = 1; i < n;)
        {

            if (str[i] == str[len])
            {
                lps[i++] = ++len;
            }
            else if (len == 0)
            {
                lps[i++] = 0;
            }
            else
            {
                len = lps[len - 1];
            }
        }
        return lps;
    }
};