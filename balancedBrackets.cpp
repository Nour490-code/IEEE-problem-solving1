# include <iostream>
# include <stack>

string isBalanced(string s) {
    stack<char> stc;
    
    for (int i = 0; i < s.length(); i++) {
        char c = stc.top();
                
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
            stc.push(s[i]);
        }else if
        ((c == '{' && s[i] == '}') || 
        (c == '[' && s[i] == ']') || 
        (c == '(' && s[i] == ')'))
        {
            stc.pop();
        }else{
            return "NO";
        }
    }
    if (!stc.empty()) return "NO"; 
    return "YES";
}