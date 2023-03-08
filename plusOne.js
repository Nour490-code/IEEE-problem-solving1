var plusOne = function(digits) {

    // Looping through the array backwards (Arethmetic)
    for(let i = digits.length - 1; i >= 0; i--) {

        //Checking if the ith element is 9 
        if( digits[i] ===  9 ){
            digits[i] = 0;
        } else{
            // If it's a normal number ...
            // It will be incremented
            digits[i]++
            return digits;
        }
    }
    //In case of 99...
    // based on above statments all the array will be zero
    //  1 will be appended by unshift method
    digits.unshift(1)
    return digits
};