# `Idea.md`
## Problem

![Problem Link Here](https://i.imgur.com/E9dt9TL.png)

## Solution 1

- since nums.length() can be equal to 0 we do a check to make sure
- if it of size 0 then we return 0 or return nothing.
- sort the array, use a counter variable to count from the indexes,
start at index[1] and check if the previous index is 1 less than
the current, if so then add one to the counter.
- at any point if the consecutive value is higher than it's
current count, replace it as the new highest count.
- return count in the end.
- This has about nlogn time for sorting, n time for traversing
through the whole list, so O(nlogn) in general.

## Solution 2

- use an unordered_set to store all the values
since we don't care about repeated numbers.
- run a loop and for each value we ask if (value - 1) is
in the map, if it is then it means current value is not a
starting consecutive number. We continue to do that until
we find a number that does not have a (value - 1) in the set.
once we find a value with no consecutive values before it, i.e
(value - 1) cannot be found, we use the current value to find
all the consecutive values one after with (value + 1), then
add it to the counter for each value that is consecutive.
Compare it with the existing longest length counter and see if
the one that just came out of the loop needs to replace the current value.

## Solution 3

- Solution Description
