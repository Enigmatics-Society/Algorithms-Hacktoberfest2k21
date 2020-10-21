# Matrix Chain Multiplication
## The Problem
**Input:** An array representing the sizes of the matrix to be multiplied in chain.
**Output:** The minimum number of multiplication ops required to solve the problem.
## The Algorithm
So the algorithm uses Dynamic Programming.
The .py file contains the recursive solution to the problem which is memoized at each subproblem in the 2-D matrix `dynMatrix`.

## Sample Input/Output
`Input: 1 2 3 4 5`
`Output: 30`

## Complexity
Recursive Solution: $O(2^n)$
Memoized Solution: $O(n^2)$
