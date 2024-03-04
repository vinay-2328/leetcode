class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> parentheses = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        
        for(char c : s){
            if(parentheses.find(c) != parentheses.end()){
                if(st.empty() || st.top() != parentheses[c]){
                    return false;
                    }
                st.pop();
            }else{
                st.push(c);
            }
        }
        return st.empty();
    }
};