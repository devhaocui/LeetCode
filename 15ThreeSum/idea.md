# `Idea.md`

## Problem

![Problem Link Here](https://i.imgur.com/TaacB45.png)
`Example Array = [5,2,1,3,6,7,8,-1,0]`

## Remarks

- I initially thought of removing duplicates by just asking if the
value already exists in the map and not adding it if so. But situations
where `Array = {0,0,0}` would make this fail as you can see.

## `attempt1.cpp`

- sort the array, because then we can ask if the first number is a duplicate
by asking if `first == next` to skip repeating the same values that we have
already went over. The problem is when there's a `{0,0,0}`
first is == to next, and if we advance it we will miss out on possible solutions.
- In general, the attempt got a bit too complicated to follow and it was unclear
what the issue was.

## Solution 2

- Solution Description

## Solution 3

- Solution Description
