var longestCommonPrefix = function(strs) {
    let prefix = ''
    if(strs.length === 0){
        return prefix
    }
    for(let i = 0; i < strs[0].length; i++){
        for(let j = 0; j < strs.length; j++){
            if(strs[j][i] !== strs[0][i]){
                return prefix
            }
        }
        prefix = prefix + strs[0][i]
    }
    return prefix
};