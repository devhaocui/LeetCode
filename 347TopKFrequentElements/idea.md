# Idea.md

## Problem

- Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

Example 1:

Input: nums = `[1,1,1,2,2,3]`, k = 2

Output: `[1,2]`

## Solution

- so k is the amount of top frequent elements the user wants from the dataset.
- example: `[1,1,1,1,5,5,5,3,3,9]` if k = 2 then we return `[1,5]`
- one way to do this is to insert it into a unordered_map.
  for each repeated number we add 1 to the value of the key `<key value>`.
- then use an ordered std::multimap to swap the key to value and value to key.
  this allows us to get the highest frequency first in an ordered map.
- then we can use a reverse iterator to get the k amount of elements.
- or we can set the map to order in descending order. (ascending by default)

## Solution 2

- similar has solution 1 but using a priority_queue to automatically grabbing
  the maxHeap (priority_queue) value without having to flip the keys and values with
  an additional map.
- a heap creation takes O(n) time, push and pop is O(log n) time.
  To find the max/min value it is constant time.
- a multimap is also log complexity however.

## Final Remarks

- Solution 1 used two containers unordered_map and multimap (ordered) to
  get the necessary values for the solution. While it does solve the problem
  but it makes it a bit tricky to understand on how to go about looping the
  multimap with a reverse iterator. What I have learned is that iterators are
  pointers to where the container values start so in order to access the member
  values we would need to use `i->second` rather than `i.second`.
- Solution 2 used the same unordered_map with a priority_queue. It handled the case
  where it automatically give us the max value at the top already.
  so there is no need to think about how to get the max value like in solution 1,
  where we used a reverse iterator.
