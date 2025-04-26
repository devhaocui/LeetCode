# Idea.md

## Problem

![Problem Link Here](https://i.imgur.com/KmRFnAC.png)

## Solution 1

### Handling the Zero cases

- write a simple for loop to traverse the entire array `nums[]` to see if there
are any 0's in the data. Keep track of the amount of zeros,
- If there is a zero then assign all other values to 0 but that value.
- If there are more than one 0 in the array then assign everything to 0.
- for the rest we can iterate the each element besides current element
  to get what we want. But this would be O(n^2) time So lets move onto something
  better.

## Solution 2: Using a Prefix Postfix Array

- We can use a prefix array to store the multiplied value of current element and one element before it.
- Then use a postfix array to store all the elements one before the last element, multiply it with the last element, keep doing that until we reach to the start of the array.
- then multiple each index of the arrays to get our result.

## Solution 3: Storing both the prefix and suffix

- Similar to solution 2, but instead of having multiple arrays we can save memory by calculating the prefix into the result array,
then using calculating the postfix and apply it with the result array. 
This should save us memory since we have now removed prefix and postfix arrays. Now we only have a result[] array.
