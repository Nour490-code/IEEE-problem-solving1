const isPalindrome = (x) => {
    //Converts the parameter "x" from number to string
    str = '' + x ;
    

    // Turns the string to an array of characters
    // Reverses the array
    // Joins all elements of the array to convert it to a string 
    revStr = str.split('').reverse().join('')

    
    //Reverse the string and turn it to a number again
    revNo =   parseFloat(revStr);


    if(revNo === x){
        return true
    }else{
        return false
    }
};