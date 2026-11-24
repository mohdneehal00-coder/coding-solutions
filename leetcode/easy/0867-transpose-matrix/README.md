# Transpose Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a 2D integer array `matrix`, return  *the  **transpose**  of*  `matrix`.

The  **transpose**  of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

 

Original
C
 **Example 1:** 

```
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]

```

 **Example 2:** 

```
Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 1000
- 1 <= m * n <= 105
- -109 <= matrix[i][j] <= 109

## Solution

**Language:** C  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15.8 MB (beats 65.40%)  
**Submitted:** 2026-11-24T12:37:02.839Z  

```c
#include <stdlib.h>

/**
 * Return an array of rows. The caller will free the returned rows
 * and the arrays pointed to by returnColumnSizes.
 */
int** transpose(
    int** matrix,
    int matrixSize,
    int* matrixColSize,
    int* returnSize,
    int** returnColumnSizes
) {
    int rows = matrixSize;
    int cols = matrixColSize[0];

    int** result = malloc(cols * sizeof(int*));
    *returnColumnSizes = malloc(cols * sizeof(int));

    for (int c = 0; c < cols; c++) {
        result[c] = malloc(rows * sizeof(int));
        (*returnColumnSizes)[c] = rows;

        for (int r = 0; r < rows; r++) {
            result[c][r] = matrix[r][c];
        }
    }

    *returnSize = cols;
    return result;
}
```

---

[View on LeetCode](https://leetcode.com/problems/transpose-matrix/)