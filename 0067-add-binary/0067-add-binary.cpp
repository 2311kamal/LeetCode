class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        while(i >= 0 || j >= 0){
            int sum = carry;
            if(i >= 0) sum = (a[i--] - '0')+sum;
            if(j >= 0) sum = (b[j--] - '0')+sum;
            carry = sum > 1 ? 1 : 0;
            res = to_string(sum % 2)+res;
        }
        if(carry) res = to_string(carry)+res;
        // reverse(res.begin(), res.end());
        return res;
    }
};