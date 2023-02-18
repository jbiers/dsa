const strings = ['a', 'b', 'c', 'd']

console.log(strings)

strings.pop()
// O(1)

console.log(strings)

strings.push('e')
// O(1), or, if dynamic array, can be O(n) if the array size is increasing

console.log(strings)

strings.unshift('r')
// O(n)

console.log(strings)

strings.splice(2, 1, 'j')
// O(n)

console.log(strings)


