# Idea.md

## Problem

- Given an array of strs strings, group the anagrams together.
  You can return the answer in any order.

- Input: strs = ["eat","tea","tan","ate","nat","bat"]
- Output: `[["bat"], ["nat","tan"], ["ate","eat","tea"]]`

- note: `strs[i]` consists of lowercase English letters.

## Solution

- so any so any string that has the exact same amount of characters are the same.
- for each string, we sort it and ask if it exists in the map,
  then insert it in the original (unsorted) format.
- return it in `vector<vector>` for at the end.
- But this might be slower since it requires sorting which is `O(n * logn)` time complexity.

## Solution 2
