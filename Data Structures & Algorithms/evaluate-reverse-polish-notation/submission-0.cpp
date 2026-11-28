class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> st;
        for(int i = 0 ; i < tokens.size() ; ++i){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
            st.push(stoi(tokens[i]));
            }
            if(tokens[i] == "+"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push((a + b));
            }
            if(tokens[i] == "-"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push((b - a));
            }
            if(tokens[i] == "*"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push((a * b));
            }
            if(tokens[i] == "/"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push((b / a));
            }
        }
        return st.top();
    }
};
