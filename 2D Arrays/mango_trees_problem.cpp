// rahul father has left a farm organized as an N x N grid. each square in the grid either has or does not have a mango tree. he has to divide the farm with his three sisters as follow : he will draw 1 horizontal line and 1 vertical line to divide the farm into 4 rectangles. his friends will choose 3 of the 4 smaller fields and he gets the last one 

// goal - max no of trees in the field he can get


// input :
// 4
// 1 0 0 0
// 0 1 0 0
// 0 0 1 0
// 0 0 0 1

// solution 
// brute force - 
// 1. find all possible horizontal lines
// 2. find all possible vertical lines
// 3. for each horizontal line, for each vertical line, find the no of trees in the 4 rectangles
// 4. return the max of all the no of trees
// time complexity - O(n^4)
// space complexity - O(1)


// optimised solution -
// we are going to use 2D prefix sum
// 1. we're going to make an auxilarry matrix 