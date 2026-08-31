class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char &ch:s){

            if(ch=='(')
             st.push(')');
            
            else if( ch=='{')
             st.push('}');

            else if(ch=='[')
             st.push(']');

            else if (st.empty() || st.top()!=ch) 
            //st.empty()=>checks extra close brackets 
             return false;

            else
             st.pop();

        }

        return st.empty();
    }
};
