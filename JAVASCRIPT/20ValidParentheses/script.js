var isValid = function (s) {
  let stack = []
  let closeToOpen = {')':'(', '}':'{', ']':'['}

  for (let c of s) {
    // if is an close bracket
    if (closeToOpen[c]) {
      if (stack[stack.length - 1] === closeToOpen[c]) {
        stack.pop()
      }
      else {
        return false
      }
    }
    // if is an open bracket
    else {
      stack.push(c)
    }
  }
  return stack.length === 0
}


