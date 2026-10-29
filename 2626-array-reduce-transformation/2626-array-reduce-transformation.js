/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(arr, fn, init) {
    for(let i=0;i<arr.length;i++){
        init = fn(init,arr[i])
    }
    return init
};