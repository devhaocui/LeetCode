# `Idea.md`

## Problem

![Problem Link Here](https://i.imgur.com/XfnG2e2.png)

## Solution

- store each of the 9 elements into a temporary set and check if there are any repeated values then invalidate it.
- do horizontal check, vertical check, then box check.
- if all checks passed, return true. At any given point if it fails return false.

## Solution 2
- maybe we can do all 3 checks at the same time
- use mod % to differentiate row by column for each 3x3 squares out of the 9 big squares that ranges from 1~9.

