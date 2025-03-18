# Idea.md

## Problem

- Given an array of integers nums and an integer target,
  return indices of the two numbers such that they add up to target.
- You may assume that each input would have exactly one solution,
  and you may not use the same element twice.
- You can return the answer in any order.

## Solution

- we know that there's exactly one solution for each array passed down.
- keep in mind we're returning the indices of the 2 numbers not the value themselves.
- so we need to keep track of 1. The position of the index 2. The value in that position.
- formula for getting the correct solution difference = input`[curIndex]` - target
- use a unordered_map and before inserting values into the set we ask whether
  the difference is in the map already. If so return the current with the key
  and value we found that's in the map.
- if we don't find the difference in the map, insert `v[i] into key and i in value`.
  `note: v[i] is the value of the number and i is how we keep track of the index`
