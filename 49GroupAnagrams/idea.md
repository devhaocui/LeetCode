# Idea.md

## Problem

![Problem Link Here](https://i.imgur.com/7OvSSD8.png)

## Solution

- so any so any string that has the exact same amount of characters are the same.
- for each string, we sort it and ask if it exists in the map,
  then insert it in the original (unsorted) format.
- return it in `vector<vector>` for at the end.
- But this might be slower since it requires sorting which is `O(n * logn)` time complexity.

## Solution 2 (NeetCode's Solution)

- with the assumptions of the constraint the problem provided
  where each string consist of only lowercase English letters.
  We can use an array of 26 elements from `arr[0]~arr[25]` to
  record the keys for each anagram in an unordered_map.
- fill the array with 0's in the beginning.
- use a method to record letters like `arr[currentChar - 'a']++`

**Note: However, I am not convinced this works optimally as our first solution**
- Since we have to create an array that needs to be loop 26 times for each string.
- on top of that, we need to convert the index values back to a string.
- it is faster in time complexity but in reality there aren't any works
  with 1 million characters. And most words aren't any longer than 10.
  therefore having a fixed array to loop 26 times no matter the length
  of each word is a time waster.
