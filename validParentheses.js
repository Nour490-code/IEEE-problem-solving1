var isValid = function(s) {
    let stack = [];

    for(i = 0; i < s.length ; i++){
        // Character is the last element of the stack
        let char = stack[stack.length - 1];        
       
        // Pushing all opening prentheses to the stack       
        if(s[i] == "(" || s[i] == "[" || s[i] == "{"){
            stack.push(s[i])
        }else if (
            //Checking if every opening parentheses...
            //has a closing one in the s[index]
            (char == "(" && s[i] == ")") ||
            (char == "[" && s[i] == "]") || 
            (char == "{" && s[i] == "}")
        ){
            // The element is then popped out of the stack if it passed
            stack.pop()
        }else{
            return false
        }
    }

    // If there is still elements in the stack ...
    // That means that there are opnening parentheses without closing ones 
    return stack.length ? false : true
};
