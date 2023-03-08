const romanToInt = (s) => {
    const arr = s.split('');
    let result = 0;

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === 'I'){

            if(arr[i+1] === 'V'){
                result += 4
                i++
            }else if(arr[i+1] === 'X'){
                result += 9
                i++
            }else{
                result += 1
            }

        }else if(arr[i] === 'V'){
            
            result +=5

        }else if(arr[i] === 'X'){
            
            if(arr[i+1] === 'L'){
                result += 40
                i++
            }else if(arr[i+1] === 'C'){
                result += 90
                i++
            }else{
                result += 10
            }

        }else if(arr[i] === 'L'){

            result += 50
        
        }else if(arr[i] === 'C'){

            if(arr[i+1] === 'D'){
                result += 400
                i++
            }else if(arr[i+1] === 'M'){
                result += 900
                i++
            }else{
                result += 100
            }

        }else if(arr[i] === 'D'){
        
            result += 500
        
        }else if(arr [i] === 'M'){
        
            result += 1000
        
        }
    }
    return result
};