# Idea.md

## Problem

![Problem Link Here](https://i.imgur.com/q7N1zsW.png)

## Solution

- encoding means we are grabbing a list of strings and putting them into a
  single string. We should add things in front of it where they call delimiters.
- for each string, lets add `(number of chars) + #` in front of each string,
  then push the string into the back of the solution string.

- decoding means we are given a very long single string, that contains
  many words with their delimiters.
- if the string is empty, then just return nothing.
- otherwise, traverse until we have found a `#` in the string, while
  keeping track of the amount of times we have traversed before `#`.
  Suppose the word has 10 characters, then we have to go back twice
  before `#` was found. For Example `10#aaaaabbbbb`

### Final Remarks (for decode part only)

- the `i` is what we use to keep looping through the string.
- `j` is used to keep track of the amount of positioned we have
moved away from the original position (which is `i`).
- after the inner loop using `s[j]` we can assume we have found a # sign.
- we then get the char values of the string before # sign was hit.
That which we know are values of characters for our word
we need to store, but they're in string form. So we convert in
using `stoi()` and assign it into an integer `lengthOfSubStr`.
- now we push the sub-string into our vector container.

> [!IMPORTANT]
> Notice how now we need to reassign the value of `i` again,
> think about what would happen if we don't do that and just
> let `i` run onto the next loop? `i` would be 1 on the next
> iteration right? From our example that's s[1] and from our
> encoded string it's a # sign. ---> `4#neet...`
> so we must re-adjust `i` such that it would skip over the
> characters we have already accounted for. Thus is what our
> final line `i = j + lengthOfSubStr + 1` is all about!
