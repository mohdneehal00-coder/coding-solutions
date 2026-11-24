# Reshape the Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

In MATLAB, there is a handy function called `reshape` which can reshape an `m x n` matrix into a new one with a different size `r x c` keeping its original data.

You are given an `m x n` matrix `mat` and two integers `r` and `c` representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the `reshape` operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

 

Original
C
 **Example 1:** 

```
Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]

```

 **Example 2:** 

```
Input: mat = [[1,2],[3,4]], r = 2, c = 4
Output: [[1,2],[3,4]]

```

 

 **Constraints:** 

- m == mat.length
- n == mat[i].length
- 1 <= m, n <= 100
- -1000 <= mat[i][j] <= 1000
- 1 <= r, c <= 300

## Solution

**Language:** C  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 16 MB (beats 17.01%)  
**Submitted:** 2026-11-24T13:28:51.471Z  

```c
#include <stdlib.h>

int** matrixReshape(int** mat, int matSize, int* matColSize,
                    int r, int c, int* returnSize,
                    int** returnColumnSizes) {
    int rows = matSize;
    int cols = matColSize[0];

    // If the element counts differ, return the original dimensions.
    if (rows * cols != r * c) {
        r = rows;
        c = cols;
    }

    *returnSize = r;
    *returnColumnSizes = malloc(r * sizeof(int));
    int** result = malloc(r * sizeof(int*));

    for (int i = 0; i < r; i++) {
        (*returnColumnSizes)[i] = c;
        result[i] = malloc(c * sizeof(int));
    }

    // Copy elements in row-traversal order.
    for (int i = 0; i < rows * cols; i++) {
        result[i / c][i % c] = mat[i / cols][i % cols];
    }

    return result;
}
```

---

[View on LeetCode](https://leetcode.com/problems/reshape-the-matrix/)