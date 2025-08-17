/**
 * @param {string} s for string 1
 * @param {string} t is string 2
 * @return {boolean} true if they are both anagrams of each other
 */

let isAnagram = function(s, t) {
  if (s.length !== t.length) return false
  let map = new Map()
  let map2 = new Map()
  for (let i = 0; i < s.length; i++) {
    map.set(s[i], (map.get(s[i]) || 0) + 1)
    map2.set(t[i], (map2.get(t[i]) || 0) + 1)
  }

  for (const [char, count] of map) {
    if (map2.get(char) !== count) {
      return false;
    }
  }
  return true
};

