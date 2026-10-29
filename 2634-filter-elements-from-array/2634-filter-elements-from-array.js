/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const n = arr.length
    let ar=[]
    for(let i=0;i<n;i++){
        if(fn(arr[i],i)){
            ar.push(arr[i])
        }
    }
    return ar
};