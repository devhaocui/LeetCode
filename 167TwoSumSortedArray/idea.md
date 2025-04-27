# `Idea.md`

## Problem

![Problem Link Here](https://i.imgur.com/d2JhCw1.png)

## Solution 1

- Use a double loop to check for every possible combination.
- If it adds to the target then return those indexes.

## Solution 2

- use a hashMap to store the number into keys and value as their indexes.
- then loop through the values and use find() to find the difference
that adds up to target.

## Solution 3

- Since the array is already sorted, we know that the smallest number
is on the very left.
- we can use a left pointer and right pointer value and left pointer
starts at begin, right pointer starts at end.
- compare if arr[start] + arr[end] > target, if so then decrease end by 1,
then skip to the next iteration with the `continue` keyword.
- compare if arr[start] + arr[end] < target, increase start by 1. Then
skip to next iteration.
- if both of these conditions are false, we will use else keyword to return
the current index using `return {start + 1, end + 1}` since the question
asked to explicitly only return `added by 1` as the index. I assume
the purpose is to get rid of 0 based index or whatever reason.
