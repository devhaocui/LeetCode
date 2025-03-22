# Idea.md

## Problem

![Problem Link Here](https://i.imgur.com/g4A3S9V.png)

- Given an integer array nums[], return true if any value **appears at least twice**
in the array, and return false if every element is distinct.

## Solution

- use a unordered_map to store each index value.
- before inserting the value into the map, check if it already exists.
  - return true if it already exists, otherwise just insert it into the map.
  - if the function finishes looping the entire array and never returned true
    then simply return false.
