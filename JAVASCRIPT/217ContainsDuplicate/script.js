/**
 * @param {number[]} nums
 * @return {boolean}
 */
let containsDuplicate = function(nums) {
  let mySet = new Set()
  for (let number of nums) {
    if (mySet.has(number)) {
      return true
    }
    else {
      mySet.add(number)
    }
  }
  return false
};
