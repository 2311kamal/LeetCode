class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int>m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        
        
        stack<int> st;
        
        for(int i=0;i<s.size();i++){
            
            if(st.empty() || st.top()>=m[s[i]] ){
                st.push(m[s[i]]);
            }
            
            else{
                int a=st.top();
                st.pop();
                st.push(m[s[i]]-a);
                
            }
            
        }
        
        
        int ans=0;
        
        while(!st.empty()){
            int a=st.top();
            st.pop();
            ans+=a;
            
        }
        
        return ans;
        
        
    }
};