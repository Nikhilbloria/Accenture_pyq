/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const n = arr.length
    let ar = []
    for(let i=0;i<n;i++){
        ar[i] = fn(arr[i],i)
    }
    return ar;
};