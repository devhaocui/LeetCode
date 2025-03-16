# Idea.md

## Problem

- Given two strings s and t, return true if t is an anagram of s, and false otherwise.

## Solution

- Store each string in an array of size 26 to represent the alphabets.
- if the current char is 'a' then add 1 to index 0.
- do the same for other string. Then compare both array by index.
  - what formula do we use so we don't have to hard code all 26 chars?
  1. create an enum named Alphabets and let 'a' = 0
  2. 'a' = 97 in decimal so we can do something like `arr[i - 97]++`

## Solution 1.1

- if the size of two strings are different return false.
- use a vector and initialize it to size 26 `vector<int> stringS(26, 0)`
- run a for loop using any of the two string's size.
- pick one string to increment and another to decrement.
  Ex. `count[s[i]] - 'a']++;` `count[t[i] - 'a']++;`
- run a for loop to check if any of the values are NOT zero, return false.

## Solution 2

- store one string into a unordered_map
- insert the second string into map, but instead of increasing the value of the
  key by one each time, decrease it by one.
- if any char are not 0 at the end of the loop, return false.
