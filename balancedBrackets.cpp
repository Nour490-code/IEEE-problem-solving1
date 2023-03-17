# include <iostream>
# include <stack>

string isBalanced(string s) {
    // Init a stack
    stack<char> stc;
    
    // Looping through the input string
    for (int i = 0; i < s.length(); i++) {
        // c is the top character in the stack
        char c = stc.top();

        // Pushing all opening brackets        
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
            stc.push(s[i]);
        }
        // Removing them if their closing are found
        else if
        ((c == '{' && s[i] == '}') || 
        (c == '[' && s[i] == ']') || 
        (c == '(' && s[i] == ')'))
        {
            stc.pop();
        }
        // If not then it's not balanced
        else{
            return "NO";
        }
    }
    // If the stack still has elements...
      // Then there are opening brackets without their closing 
    if (!stc.empty()) return "NO"; 
    return "YES";
}