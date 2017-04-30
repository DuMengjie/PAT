// Instructions:
// In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.
//
// Example:
//
// highAndLow("1 2 3 4 5"); // return "5 1"
// highAndLow("1 2 -3 4 5"); // return "5 -3"
// highAndLow("1 9 3 4 -5"); // return "9 -5"
// Notes:
//
// All numbers are valid Int32, no need to validate them.
// There will always be at least one number in the input string.
// Output string must be two numbers separated by a single space, and highest number is first.
//
// Sample Tests:
// Test.assertEquals(highAndLow("4 5 29 54 4 0 -214 542 -64 1 -3 6 -6"), "542 -214");
// Test.assertEquals(highAndLow("1 -1"), "1 -1");
// Test.assertEquals(highAndLow("1 1"), "1 1");
//
// Best Practices
// function highAndLow(numbers){
//   numbers = numbers.split(' ').map(Number);
//   return Math.max.apply(0, numbers) + ' ' + Math.min.apply(0, numbers);
// }
function highAndLow(numbers){
  // ...
  var arr = numbers.split(' ').sort(function(a, b){return a-b});
  return arr[arr.length-1] + ' ' + arr[0];
}