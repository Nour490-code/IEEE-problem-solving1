var searchInsert = function(nums, target) {
    //Binary search

    // Initiating both right and left pointers
    let right = nums.length - 1;
    let left = 0;

    while (left <= right) {
        // Init middle element and flooring the result 
        const mid = Math.floor((left + right) / 2);

        //Early check if the middle is already..
        // equal to the target -> return it
        if (nums[mid] ==  target) return mid

        //If target bigger than middle
        if (nums[mid] < target) {
            //Change the left pointer ...
            // Choose the right side of the array
            left = mid + 1;
        } else {
            // If not we choose the left side of the array
            right = mid - 1; 
        }
    }

    return left;
};