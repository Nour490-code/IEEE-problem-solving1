const twoSum = function(nums, target) {
    for (let i = 0; i < nums.length; i++) {
        for (let j = 1; j < nums.length; j++) {
            if(nums[i] + nums[i+j] === target){
                return [i,i+j]
            }
        }
    }
};

console.log(twoSum([2,7,11,15], 9));
console.log(twoSum([3,2,4],6));
console.log(twoSum([3,3],6));
