// class Solution
// {
// public:
//     string longestCommonPrefix(vector<string> &str)
//     {

//         string ans = "";
//         for (int i = 0; i < str[0].size(); i++)
//         {

//             char a = str[0][i];
//             int j;
//             for (j = 0; j < str.size(); j++)
//             {

//                 if (i >= str[j].size() || str[j][i] != a)
//                     break;
//             }
//             if (j == str.size())
//                 ans += a;
//             else
//             {
//                  break;
//             }
//         }
//         return ans;
//     }
// };




class Solution
{
public:
    string longestCommonPrefix(vector<string> &v)
    {
        string ans = "";
        sort(v.begin(), v.end());
        int n = v.size();
        string first = v[0], last = v[n - 1];
        for (int i = 0; i < min(first.size(), last.size()); i++)
        {
            if (first[i] != last[i])
            {
                return ans;
            }
            ans += first[i];
        }
        return ans;
    }
};